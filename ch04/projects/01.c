/**
 * @file 01.c
 * @author xennia316@gmail.com
 * @brief reverse a two digit number.
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int number, first_digit, second_digit;
    printf("Enter a two digit number: ");
    scanf("%d", &number);

    second_digit = number % 10;
    first_digit = number / 10;

    printf("The reversed number is: %d%d\n", second_digit, first_digit);

    return 0;
}