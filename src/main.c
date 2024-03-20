#include <stdio.h>
#include "domain.h"
#include "utils.h"

void test_all() {
    test_domain();
    test_utils();
}

int main(void) {
    test_all();
    printf("Hello, world!\n");
    return 0;
}
