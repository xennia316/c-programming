/**
 * @file 11b.c
 * @author xennia316
 * @brief simple code to monitor implemen patterns
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

    i = 5;
    j = ++i * 3 - 2;

    printf("%d \n", i++ - ++j);
    printf("%d %d \n" ,i ,j);

    return 0;

}