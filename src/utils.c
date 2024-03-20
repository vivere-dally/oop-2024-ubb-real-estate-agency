#include "utils.h"

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void read_input(char* message, const char* format, void* buffer) {
    printf("%s\n> ", message);
    if (scanf(format, buffer) == EOF) {
        fprintf(stderr, "Could not read the input with format %s.", format);
        exit(1);
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int double_eq(double a, double b) { return fabs(a - b) < EPSILON; }

void test_doublecmp() {
    assert(double_eq(123, 123) == 1);
    assert(double_eq(123, 124) == 0);
    assert(double_eq(123.123, 123.123) == 1);
    assert(double_eq(123.1234, 123.1235) == 1);
}

void test_utils() { test_doublecmp(); }
