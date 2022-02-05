/**
 * @file prime.c
 * @author @xennia316
 * @brief Tests whether a number is prime
 * @version 0.1
 * @date 2022-01-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdbool.h>
// function for finding the prime numbers
//bool returns true or false only
bool is_prime(int n)
{
    int divisor;

    if (n <= 1)
        return false;
    for (divisor = 2; divisor * divisor <= n; divisor++)
        if (n % divisor == 0)
            return false;
    return true;
}

int main(void)
{
    int n;
    // after calling is_prime with parameter n returns a true value then "Print" else print "Not prime"
    printf("Enter a number: ");
    scanf("%d", &n);
    if (is_prime(n))
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}