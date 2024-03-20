#include "utils.h"

#include <assert.h>
#include <math.h>

int double_eq(double a, double b) { return fabs(a - b) < EPSILON; }

void test_doublecmp() {
    assert(double_eq(123, 123) == 1);
    assert(double_eq(123, 124) == 0);
    assert(double_eq(123.123, 123.123) == 1);
    assert(double_eq(123.1234, 123.1235) == 1);
}

void test_utils() { test_doublecmp(); }
