/**
 * @file converter.c
 * @author xennia316
 * @brief Converting from miles to kilometers.
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    float miles;
    float kilometers;

    printf("Enter a distance in miles: ");
    scanf("%f", &miles);

    kilometers = miles * 1.609;

    printf("%.2f Miles is equal to %.3f kilometers\n", miles, kilometers);

    return 0;
}