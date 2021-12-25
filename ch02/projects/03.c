/**
 * @file 03.c
 * @author Sonia Amehmbo @xennia316
 * @brief Adding input to 02.c
 * @version 0.1
 * @date 2021-12-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#define PI 3.14f

int main(void)
{
    float volume;
    float radius;
    float ratio;

    printf("Input the radius of the sphere: ");
    scanf("%f", &radius);
    ratio = (4.0f / 3.0f);

    volume = ratio * PI * radius * radius * radius;

    printf("The volume of this sphere is: %f\n", volume);

    return 0;
}