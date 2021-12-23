/**
 * @file 03.c
 * @author xennia316@gmail.com
 * @brief Simplifying a fraction to its lowest terms.
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
int main(void)
{
    int a, b, i;
    float gcd;
    printf("Enter numerator: ");
    scanf("%d", &a);
    printf("Enter denominator: ");
    scanf("%d", &b);

    for(i = 0; i<= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("The simplified fraction is: %d/%d\n", a/(int)gcd, b/(int)gcd);
    return 0;
}