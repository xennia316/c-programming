/**
 * @file power.c
 * @author xennia316
 * @brief Raising a number to a certain power.
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int number;
    int a;
    int i;
    long power = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the power: ");
    scanf("%d", &a);

    for(i = 1; i <= a; i++)
    power = power * number;

    printf("The number %d to the power %d is %ld", number, a, power);
    printf("\n");

    return 0;
}