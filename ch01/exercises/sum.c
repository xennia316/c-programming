/**
 * @file sum.c
 * @author xennia316
 * @brief sum of 2 numbers
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;

    printf("Please enter a number\n");
    scanf("%d", &a);

    printf(" Enter another number\n");
    scanf("%d", &b);

    c = a + b;

    printf("Sum = %d\n", c);

    return 0;


}