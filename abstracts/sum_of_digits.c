/**
 * @file sum_of_digits.c
 * @author xennia316
 * @brief Summing all digits of a number
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while ( number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    
    printf("The sum of digits of %d is %d\n", number, sum);

    return 0;
}
