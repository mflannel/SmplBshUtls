#include "s21_grep_test.h"

int main(void) {
    start_tests();
    return 0;
}

void start_tests() {
    
    // FILE *fd1 = fopen("grep/test/tmp_test_file.txt", "w");
    
        char command1[512] = {'\0'};
        char command2[512] = {'\0'};
        strcat(command1, "grep ");
        strcat(command2, "./s21_grep ");
        strcat(command1, "-e hello");
        strcat(command2, "-e hello");
        strcat(command1, " grep/test/tmp_test_file.txt > grep/test/tmp1");
        strcat(command2, " grep/test/tmp_test_file.txt > grep/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff grep/test/tmp1 grep/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }

        memset(command1, '\0', 512);
        memset(command2, '\0', 512);
        strcat(command1, "grep ");
        strcat(command2, "./s21_grep ");
        strcat(command1, "-i hello");
        strcat(command2, "-i hello");
        strcat(command1, " grep/test/tmp_test_file.txt > grep/test/tmp1");
        strcat(command2, " grep/test/tmp_test_file.txt > grep/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff grep/test/tmp1 grep/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }

        memset(command1, '\0', 512);
        memset(command2, '\0', 512);
        strcat(command1, "grep ");
        strcat(command2, "./s21_grep ");
        strcat(command1, "-v hello");
        strcat(command2, "-v hello");
        strcat(command1, " grep/test/tmp_test_file.txt > grep/test/tmp1");
        strcat(command2, " grep/test/tmp_test_file.txt > grep/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff grep/test/tmp1 grep/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }

        memset(command1, '\0', 512);
        memset(command2, '\0', 512);
        strcat(command1, "grep ");
        strcat(command2, "./s21_grep ");
        strcat(command1, "-c hello");
        strcat(command2, "-c hello");
        strcat(command1, " grep/test/tmp_test_file.txt > grep/test/tmp1");
        strcat(command2, " grep/test/tmp_test_file.txt > grep/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff grep/test/tmp1 grep/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }

        memset(command1, '\0', 512);
        memset(command2, '\0', 512);
        strcat(command1, "grep ");
        strcat(command2, "./s21_grep ");
        strcat(command1, "-l hello");
        strcat(command2, "-l hello");
        strcat(command1, " grep/test/tmp_test_file.txt > grep/test/tmp1");
        strcat(command2, " grep/test/tmp_test_file.txt > grep/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff grep/test/tmp1 grep/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }

        memset(command1, '\0', 512);
        memset(command2, '\0', 512);
        strcat(command1, "grep ");
        strcat(command2, "./s21_grep ");
        strcat(command1, "-n hello");
        strcat(command2, "-n hello");
        strcat(command1, " grep/test/tmp_test_file.txt > grep/test/tmp1");
        strcat(command2, " grep/test/tmp_test_file.txt > grep/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff grep/test/tmp1 grep/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }
}