#ifndef UTILS_H
#define UTILS_H

#define EPSILON 1e-3

void read_input(char* message, const char* format, void* buffer);

/**
 * Returns 1 if a and b are equal
 */
int double_eq(double a, double b);

void test_utils();

#endif
