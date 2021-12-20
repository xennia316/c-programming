/**
 * @file long_sum.c
 * @author xennia316
 * @brief summing a series of numbers using long variables.
 * @version 0.1
 * @date 2021-12-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    long n, sum = 0;
    printf("This program sums a series of numbers\n");

    printf("Enter integers (0 to terminate): ");
    scanf("%ld", &n);

    while(n != 0)
    {
        sum += n;
        scanf("%ld", &n);
    }
    printf("The sum of these numbers is: %ld\n", sum);

    return 0;
}