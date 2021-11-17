/**
 * @file 11d.c
 * @authorxennia316
 * @brief simple exercise for increment and decrementing variables
 * @version 0.1
 * @date 2021-11-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 3; j = 4; k = 5;

    printf("%d\n", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);

    return 0;
}