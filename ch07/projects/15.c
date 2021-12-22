/**
 * @file 15.c
 * @author xennia316
 * @brief Computes the factorial of a number.
 * @version 0.1
 * @date 2021-12-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
int main(void)
{
    int a;
    int i;
    long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &a);

    for(i = 1; i <= a; i++)
    {
        fact = fact * i;
        // fact ++;
    }

    printf("The factorial is: %ld\n", fact);
    return 0;
}