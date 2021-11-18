/**
 * @file 03d.c
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

    i = 1;
    j = 1;
    k = 1;

    printf("%d\n", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}