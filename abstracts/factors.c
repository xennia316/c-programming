/**
 * @file factors.c
 * @author xennia316
 * @brief Program to find the factors of a number.
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
    int i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The factors of %d are: \n\n", num);

    for(i = 0; i <= num/2; i++)
    {
        if (num%i == 0)
        printf("\t\t%d \n", i);
    }

    return 0;
}