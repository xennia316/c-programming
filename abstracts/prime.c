/**
 * @file prime.c
 * @author xennia316
 * @brief Program to determine prime numbers
 * @version 0.1
 * @date 2021-12-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main(void)
{
    int n, i, flag;
    flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for( i = 2; i <= n/2; ++i)
    {
        if( n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if( n == 1)
    {
        printf("1 is not a prime number nor is it composite.\n");
    }

    else
    {
        if(flag == 0)
            printf("%d is prime.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    return 0;
}