/**
 * @file 03c.c
 * @author xennia316
 * @brief showing the short circuit nature of logical expressions
 * @version 0.1
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 7;
    j = 8;
    k = 9;

    printf("%d\n", (i == j) || (j == k));
    printf("%d %d %d\n", i, j, k);

    return 0;
}