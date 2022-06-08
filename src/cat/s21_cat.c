// "Copyright 2022 neelyrha"

#include "./s21_cat.h"

int parseFlags(CatFlags *caseFlags, int argc, char *argv[]);
int scan(char *argv[], CatFlags *caseFlags);
int s21_cat(CatFlags *caseFlags, FILE *file);
void initFlagList(CatFlags *flag);

int main(int argc, char *argv[]) {
    int res = 1;
    CatFlags aboba;
    CatFlags *caseFlags = &aboba;
    initFlagList(caseFlags);
    if (!parseFlags(caseFlags, argc, argv)) return (-1);

    if (caseFlags->b)
        caseFlags->n = false;
    if (caseFlags->v)
        caseFlags->e = false, caseFlags->t = false;
    for (; optind < argc; optind++)
        res = scan(argv, caseFlags);
    return res;
}

void initFlagList(CatFlags *flag) {
    flag->b = false;
    flag->e = false;
    flag->n = false;
    flag->s = false;
    flag->t = false;
    flag->v = false;
}

int scan(char *argv[], CatFlags *caseFlags) {
    FILE *file;
    int res = 0;

    if ((file=fopen(argv[optind], "r")) == NULL) {
        printf("Cannot open file.\n");
        res = -1;
    } else {
        s21_cat(caseFlags, file);
}
return res;
}

int parseFlags(CatFlags *caseFlags, int argc, char *argv[]) {
    int pos, res, i = 0;
    while ((pos = getopt_long(argc, argv, " bEnsTvet", ops, &i)) != -1) {
        caseFlags->b = pos == 'b' ? true : caseFlags->b;
        caseFlags->e = pos == 'e' ? true : caseFlags->e;
        caseFlags->n = pos == 'n' ? true : caseFlags->n;
        caseFlags->s = pos == 's' ? true : caseFlags->s;
        caseFlags->t = pos == 't' ? true : caseFlags->t;
        caseFlags->v = pos == 'v' ? true : caseFlags->v;
        pos == '?' ? res = -1 : 1;
    }
    return (res);
}

int s21_cat(CatFlags *caseFlags, FILE *file) {
    int i = 1;
    int lineIsVoid = 0;
    char endOfLine = '\n';

    while (notEOF) {
        int character = fgetc(file);
        if (character == EOF)
            break;
        if (caseFlags->s && character == '\n' && endOfLine == '\n') {
            lineIsVoid++;
            if (lineIsVoid > 1)
                continue;
        } else {
            lineIsVoid = 0;
        }
        if (caseFlags->n || (caseFlags->b && character != '\n')) {
            if (endOfLine == '\n') {
                printf("%6d\t", i++);
            }
        }
        if (caseFlags->t && character == '\t') {
            printf("^");
            character = 'I';
        }
        if (caseFlags->e && character == '\n')
            printf("$");
        if (caseFlags->v || caseFlags->e || caseFlags->t) {
            if (character < 32 && character > -1 &&
            character != '\n' && character != 9) {
                printf("^");
                character += 64;
            } else if (character == 127) {
                printf("^");
                character -= 64;
            }
            }
        printf("%c", character);
        endOfLine = character;
    }
    fclose(file);
    return(0);
}
