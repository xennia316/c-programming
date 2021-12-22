/**
 * @file 02.c
 * @author xennia316
 * @brief Euclidean algorithm to find gcd.
 * @version 0.1
 * @date 2021-12-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int m, n, rem;

    printf("Enter a numbers: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);

    if (n != 0)
    {
        do
        {
            rem = m % n;
            m = n;
            n = rem;
            if (n == 0)
                printf("The gcd is %d\n", m);
        } while (n != 0);
    }

    else
        printf("The gcd is %d\n", m);

    return 0;
}