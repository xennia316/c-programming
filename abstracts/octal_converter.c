/**
 * @file octal_converter.c
 * @author @xennia316
 * @brief Converts numbers from Decimal to octal
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <math.h>

long octal_converter(int octal_number)
{
    int decimal_number = 0, temp = 0.00;
    while (octal_number != 0)
    {
        decimal_number = decimal_number + (octal_number % 10) * pow(8.00, temp);
        temp++;
        octal_number = octal_number / 10;
    }
    return decimal_number;
}

int main(void)
{
    int octal_number;
    printf("Enter an octal number: ");
    scanf("%d", &octal_number);

    //calling the function
    printf("The octal equivalent is: %ld", octal_converter(octal_number));

    return 0;
}