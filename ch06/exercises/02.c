/**
 * @file 02.c
 * @author xennia316
 * @brief output produced by a do and while statement.
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int i;

    i = 9384;

    do{
        printf("%d\n", i);
        i /= 10;
    } while(i > 0);

    return 0;
}