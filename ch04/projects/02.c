/**
 * @file 02.c
 * @author Sonia Amehmbo @xennia316
 * @brief Reverses 3 digit number
 * @version 0.1
 * @date 2022-01-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    int num, mid, last;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    last = num % 10;
    num /= 10;

    mid = num % 10;
    num /= 10;

    printf("The reversed number is: %3d%d%d\n", last, mid, num);

    return 0;

}