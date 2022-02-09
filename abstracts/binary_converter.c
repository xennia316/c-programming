/**
 * @file binary_converter.c
 * @author @xennia316
 * @brief Takes a decimal input and sends out a  binary number.
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <math.h>

long binary(int binary)
{
    int dec = 0, temp = 0.0;
    while (binary != 0)
    {
        dec = dec + (binary % 10) * pow(2.0, temp);
        temp++;
        binary = binary / 10;
    }
    return dec;
}

int main(void)
{
    int decimal;

    printf("Enter decimal number here: ");
    scanf("%d", &decimal);

    printf("Binary ewquivalent of %d is %ld\n", decimal, binary(decimal));

    return 0;
}