#include "test.h"

int tests_total = 0;
int tests_fail = 0;


int close(float a, float b)
{
    return a-EPS<b && b<a+EPS;
}

void test()
{
    printf("%d tests, %d passed, %d failed\n", tests_total, tests_total-tests_fail, tests_fail);
}

