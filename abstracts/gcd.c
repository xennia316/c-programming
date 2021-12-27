/**
 * @file gcd.c
 * @author xennia316
 * @brief finding the gcd of two numbers
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
int main(void)
{
    int num1;
    int num2;
    int gcd;
    int i;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for(i = 0; i <= num1 && i <= num2; i++)
    {
        // Check for the value of i that divides both numbers
        if(num1 % i == 0 && num2 % i == 0)
        gcd = i;
    }

    printf("The gcd of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}