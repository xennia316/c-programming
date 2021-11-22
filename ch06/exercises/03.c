/**
 * @file 03.c
 * @author xennia316
 * @brief output displayed by a for loop.
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int i, j;

    for(i = 5, j = i - 1; i > 0, j > 0; --i, j = i -1)
        printf("%d\n", i);

            return 0;
}