/**
 * @file 05.c
 * @author xennia316@gmail.com
 * @brief reversing a number
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
int main(void)
{
    int number, next_digit, last_digit;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The reversed number is: ");
    do
    {
        last_digit = number % 10;
        number = number / 10;
        printf("%d", last_digit);
    } while (number > 0);
    printf("\n");
    return 0;
}