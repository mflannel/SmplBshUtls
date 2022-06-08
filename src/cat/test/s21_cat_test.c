// "Copyright 2022 neelyrha"

#include "./s21_cat_test.h"

int main(void) {
    start_tests();
    return 0;
}
void start_tests() {
        char command1[512] = {'\0'};
        char command2[512] = {'\0'};
        strcat(command1, "cat ");
        strcat(command2, "./s21_cat ");
        strcat(command1, "-e");
        strcat(command2, "-e");
        strcat(command1, " cat/test/tmp_test_file.txt > cat/test/tmp1");
        strcat(command2, " cat/test/tmp_test_file.txt > cat/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff cat/test/tmp1 cat/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }

        memset(command1, '\0', 512);
        memset(command2, '\0', 512);
        strcat(command1, "cat ");
        strcat(command2, "./s21_cat ");
        strcat(command1, "-b");
        strcat(command2, "-b");
        strcat(command1, " cat/test/tmp_test_file.txt > cat/test/tmp1");
        strcat(command2, " cat/test/tmp_test_file.txt > cat/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff cat/test/tmp1 cat/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }

        memset(command1, '\0', 512);
        memset(command2, '\0', 512);
        strcat(command1, "cat ");
        strcat(command2, "./s21_cat ");
        strcat(command1, "-n");
        strcat(command2, "-n");
        strcat(command1, " cat/test/tmp_test_file.txt > cat/test/tmp1");
        strcat(command2, " cat/test/tmp_test_file.txt > cat/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff cat/test/tmp1 cat/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }

        memset(command1, '\0', 512);
        memset(command2, '\0', 512);
        strcat(command1, "cat ");
        strcat(command2, "./s21_cat ");
        strcat(command1, "-s");
        strcat(command2, "-s");
        strcat(command1, " cat/test/tmp_test_file.txt > cat/test/tmp1");
        strcat(command2, " cat/test/tmp_test_file.txt > cat/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff cat/test/tmp1 cat/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }

        memset(command1, '\0', 512);
        memset(command2, '\0', 512);
        strcat(command1, "cat ");
        strcat(command2, "./s21_cat ");
        strcat(command1, "-t");
        strcat(command2, "-t");
        strcat(command1, " cat/test/tmp_test_file.txt > cat/test/tmp1");
        strcat(command2, " cat/test/tmp_test_file.txt > cat/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff cat/test/tmp1 cat/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }

        memset(command1, '\0', 512);
        memset(command2, '\0', 512);
        strcat(command1, "cat ");
        strcat(command2, "./s21_cat ");
        strcat(command1, "-v");
        strcat(command2, "-v");
        strcat(command1, " cat/test/tmp_test_file.txt > cat/test/tmp1");
        strcat(command2, " cat/test/tmp_test_file.txt > cat/test/tmp2");
        printf("%s\n", command1);
        printf("%s\n", command2);
        system(command1);
        system(command2);
        if (system("diff cat/test/tmp1 cat/test/tmp2")) {
            printf("%sFAIL%s\n", RED, RESET);
        } else {
            printf("%sOK!%s\n", GRN, RESET);
        }
}
