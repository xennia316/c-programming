/**
 * @file converter2.c
 * @author xennia316
 * @brief Convert from celsuis to kelvin.
 * @version 0.1
 * @date 2021-12-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#define CONST 273.0

int main(void)
{
    float temp;
    float new_temp;
    printf("Enter the temoerature in celsuis: ");
    scanf("%f", &temp);
        new_temp = temp + CONST;

    printf("The temperature in degree kelvin is: %f", new_temp);
    printf("\n\n");

    return 0;

}