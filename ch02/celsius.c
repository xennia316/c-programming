/**
 * @filecelsius.c
 * @author Sonia Amehmbo @xennia316
 * @brief Converts a farenheiit temperature tocelsius
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float farenheit,celsius;

    printf("Enter farenheit temoerature: ");
    scanf("%f", &farenheit);

    celsius = (farenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsuis equivalent: %.1f\n", celsius);

    return 0;
}