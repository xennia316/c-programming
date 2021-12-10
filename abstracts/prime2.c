/**
 * @file prime2.c
 * @author xennia316
 * @brief Program to find prime numbers in a given range
 * @version 0.1
 * @date 2021-12-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int  num1, num2, flag_var, i, j;
    printf("Enter the range of numbers (Start number and end number): ");
    scanf("%d %d", &num1, &num2);

    printf("The prime numbers between %d and %d are:\n", num1, num2);

    for(i = num1 + 1; i < num2; ++i)
    {
        flag_var = 0;
        for( j = 2; j <= i/2; ++j)
        {
            if( i%j == 0)
            {
                flag_var = 1;
                break;

            }
        }
        if (flag_var == 0)
            printf("%d\n", i);
    }

    return 0;
}