/**
 * @file 02.c
 * @author Sonia Amehmbo@xennia316
 * @brief Volume of a sphere
 * @version 0.1
 * @date 2021-12-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#define PI 3.14

int main(void)
{
    float volume;
    int radius;
    float ratio;

    radius = 2;
    ratio = (4.0f / 3.0f);

    volume = ratio * PI * radius * radius * radius;

    printf("The volume of this sphere is: %f\n", volume);

    return 0;
}