#include "s21_grep.h"

void parser(int argc, char **argv, struct Code_s *flags) {
    int i = 0;
    while (((i = getopt_long(argc, argv, "eivcln", NULL, NULL)) != -1)) {
        switch (i) {
            case 'e':
                flags->e += 1;
                break;
            case 'i':
                flags->i = true;
                break;
            case 'v':
                flags->v = true;
                break;
            case 'c':
                flags->c = true;
                break;
            case 'l':
                flags->l = true;
                break;
            case 'n':
                flags->n = true;
                break;
        }
    if (flags->e == 1)
        flags->e = 0;
    }
}

void initCounters(struct Counters_s *counters) {
    counters->success_counter = 0;
    counters->file_counter = 0;
    counters->line_counter = 0;
    counters->stop_search = false;
    counters->file_name = 0;
}

int main(int argc, char **argv) {
    Flags flags;
    flags.i = false;
    flags.e = 0;
    flags.v = false;
    flags.l = false;
    flags.n = false;
    flags.c = false;
    parser(argc, argv, &flags);
    getFile(flags, optind, argv, argc);
    return (0);        
}

int getFile(Flags flags, int optind, char **argv, int argc) {
    char *line = NULL;
    char template[1024] = {"\0"};
    size_t len = 0;
    int read;
    struct Counters_s countNums;
    initCounters(&countNums);

    countNums.file_name = optind + flags.e + 1;
    countNums.file_counter =  argc - optind - 1;

    while (countNums.file_name < argc){
        strcat(template, argv[optind]);
        FILE *file = fopen(argv[countNums.file_name], "r");
        if (file == NULL)
            printf("grep: %s: No such file or directory\n", argv[countNums.file_name]);
        else {
            while ((read = getline(&line, &len, file)) != -1 && !countNums.stop_search) {
                countNums.line_counter += 1;
                search(&flags, template, line, argv, &countNums);
            }
            if (flags.c){
                if (countNums.file_counter > 1)
                    printf("%s:", argv[countNums.file_name]);
                printf("%d\n", countNums.success_counter);
            }
            countNums.stop_search = false;
            countNums.line_counter = 0;
            memset(template,'\0',1024);
            countNums.success_counter = 0;
        }
        countNums.file_name++;
        if (flags.e > 1)
            optind++;
    }
    return EXIT_SUCCESS;
}

void search(Flags *flags, char *template, char *line, char **argv, struct Counters_s *countNums) {
    int regflag = 0;
    regmatch_t pmatch[1];
    int success = 0;
    regex_t regex;
    int k = 0;

    if (flags->i)
        regflag = REG_ICASE;
    regcomp(&regex, template, regflag);
    success = regexec(&regex, line, 1, pmatch, 0);

    if ((success == 0 && !flags->v) || (success == REG_NOMATCH && flags->v)){
        countNums->success_counter += 1;
        if (flags->l) {
            printf("%s\n", argv[countNums->file_name]);
            countNums->stop_search = true;
            }
        else if (!flags->c && !flags->l){
            if (countNums->file_counter > 1) {
                printf("%s:", argv[countNums->file_name]);
            }
            if (flags->n)
                printf("%d:", countNums->line_counter);
            printf("%s", line);

            while (line[k] != '\0' && line[k] != '\n'){
                k++;
                if (line[k] == '\0')
                    printf("\n");
            }
        }
    }
    regfree(&regex);
}