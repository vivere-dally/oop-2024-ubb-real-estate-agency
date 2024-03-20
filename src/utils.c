#include "utils.h"

#include <assert.h>
#include <math.h>

int doublecmp(double a, double b) { return fabs(a - b) < EPSILON; }

void test_doublecmp() {
    assert(doublecmp(123, 123) == 1);
    assert(doublecmp(123, 124) == 0);
    assert(doublecmp(123.123, 123.123) == 1);
    assert(doublecmp(123.1234, 123.1235) == 1);
}

void test_utils() { test_doublecmp(); }
