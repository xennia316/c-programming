/**
 * @file 04.C
 * @author Sonia Amehmbo @xennia316
 * @brief Displays the octal equivalence of a decimal number.
 * @version 0.1
 * @date 2022-01-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    int decimal, octal1 = 0, octal2, octal3, octal4, octal5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal);

    octal5 = decimal % 8;
    decimal /= 8;
    octal4 = decimal % 8;
    decimal /= 8;
    octal3 = decimal % 8;
    decimal /= 8;
    octal2 = decimal % 8;
    decimal /= 8;
    octal1 = decimal % 8;

    printf("%d%d%d%d%d\n", octal1, octal2, octal3, octal4, octal5);

    return 0;
}