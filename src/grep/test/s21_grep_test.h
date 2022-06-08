#ifndef SRC_GREP_TEST_S21_GREP_TEST_H_
#define SRC_GREP_TEST_S21_GREP_TEST_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GRN "\e[0;32m"
#define RED "\e[0;31m"
#define RESET "\e[0m"

void start_tests(void);
void file_gen(void);
int compare(void);

static const char *const s21_mac_flags[6] = {
    [0] = " -e ", [1] = " -i ", [2] = " -v ", [3] = " -c ", [4] = " -l ", [5] = " -n "};

#endif  // SRC_GREP_TEST_S21_GREP_TEST_H_
