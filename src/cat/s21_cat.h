// "Copyright 2022 neelyrha"

#ifndef SRC_CAT_S21_CAT_H_
#define SRC_CAT_S21_CAT_H_

#include <stdbool.h>
#include <getopt.h>
#include <stdio.h>

bool notEOF = true;

static struct option ops[] = {
        {"number-nonblank", 0, 0, 'b'},
        {"number", 0, 0, 'n'},
        {"squeeze-blank", 0, 0, 's'},
        {NULL, 0, NULL, 0},
};

typedef struct Indicators {
    int i;
    int endOfLine;
    int lineIsVoid;
}Indicators;

typedef struct Flags {
    bool b;
    bool e;
    bool n;
    bool s;
    bool t;
    bool v;
}CatFlags;

void initFlagList(CatFlags *flag);

#endif  //  SRC_CAT_S21_CAT_H_
