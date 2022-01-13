/**
 * @file 03.c
 * @author Sonia Amehmbo @xennia316
 * @brief Reversing three digit number without any arithmetics
 * @version 0.1
 * @date 2022-01-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    int first_digit, second_digit, third_digit;

    printf("Enter a three digit number with space between: ");
    scanf("%d%d%d", &first_digit, &second_digit, &third_digit);

    // if (first_digit > 9 || second_digit > 9 || third_digit || 9)
    //     printf("Not a three digit number");

    // else
        printf("The reversed number is: %d%d%d\n", third_digit, second_digit, first_digit);

    return 0;
}