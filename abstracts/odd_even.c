/**
 * @file odd_even.c
 * @author xennia316
 * @brief Program that checks if a number is odd or even.
 * @version 0.1
 * @date 2021-12-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n");

    if(num % 2 == 0)
        printf("%d is an even number\n\n", num);

    else
        printf("%d is an odd number\n\n", num);

        return 0;
}