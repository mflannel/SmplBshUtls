// "Copyright 2022 <Copyright Owner>"
#include "./s21_grep_test.h"

int main(void) {
    start_tests();
    return 0;
}

void start_tests() {
    // FILE *fd1 = fopen("grep/test/tmp_test_file.txt", "w");
        char command1[512] = {'\0'};
        char command2[512] = {'\0'};
        snprintf(command1, strlen("grep "), "grep ");
        snprintf(command2, strlen("./s21_grep "), "./s21_grep ");
        snprintf(command1, strlen("-e hello"), "-e hello");
        snprintf(command2, strlen("-e hello"), "-e hello");
        snprintf(command1, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp1"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp1");
        snprintf(command2, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp2"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp2");
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
        snprintf(command1, strlen("grep "), "grep ");
        snprintf(command2, strlen("./s21_grep "), "./s21_grep ");
        snprintf(command1, strlen("-i hello"), "-i hello");
        snprintf(command2, strlen("-i hello"), "-i hello");
        snprintf(command1, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp1"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp1");
        snprintf(command2, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp2"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp2");
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
        snprintf(command1, strlen("grep "), "grep ");
        snprintf(command2, strlen("./s21_grep "), "./s21_grep ");
        snprintf(command1, strlen("-v hello"), "-v hello");
        snprintf(command2, strlen("-v hello"), "-v hello");
        snprintf(command1, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp1"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp1");
        snprintf(command2, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp2"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp2");
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
        snprintf(command1, strlen("grep "), "grep ");
        snprintf(command2, strlen("./s21_grep "), "./s21_grep ");
        snprintf(command1, strlen("-c hello"), "-c hello");
        snprintf(command2, strlen("-c hello"), "-c hello");
        snprintf(command1, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp1"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp1");
        snprintf(command2, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp2"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp2");
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
        snprintf(command1, strlen("grep "), "grep ");
        snprintf(command2, strlen("./s21_grep "), "./s21_grep ");
        snprintf(command1, strlen("-l hello"), "-l hello");
        snprintf(command2, strlen("-l hello"), "-l hello");
        snprintf(command1, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp1"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp1");
        snprintf(command2, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp2"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp2");
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
        snprintf(command1, strlen("grep "), "grep ");
        snprintf(command2, strlen("./s21_grep "), "./s21_grep ");
        snprintf(command1, strlen("-n hello"), "-n hello");
        snprintf(command2, strlen("-n hello"), "-n hello");
        snprintf(command1, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp1"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp1");
        snprintf(command2, \
        strlen(" grep/test/tmp_test_file.txt > grep/test/tmp2"), \
        " grep/test/tmp_test_file.txt > grep/test/tmp2");
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
