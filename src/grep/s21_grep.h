// "Copyright 2022 <Copyright Owner>"
#ifndef SRC_GREP_S21_GREP_H_
#define SRC_GREP_S21_GREP_H_
#define BUFFSIZE 1024

#include <stdio.h>
#include <getopt.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <regex.h>

typedef struct Code_s Flags;

struct Code_s {
    int e;
    bool i;
    bool v;
    bool c;
    bool l;
    bool n;
};

struct Counters_s {
    int line_counter;
    int file_counter;
    int success_counter;
    bool stop_search;
    int file_name;
}Counters_t;

void parser(int argc, char **argv, struct Code_s *flags);
int getFile(Flags flags, int optind, char **argv, int argc);
void search(Flags *flags, char *template, char *line, \
char **argv, struct Counters_s *counters);
void initCounters(struct Counters_s *counters);

#endif  //  SRC_GREP_S21_GREP_H_
