/**
 * @file area_of_circle.c
 * @author Sonia Amehmbo @xennia316
 * @brief Finding the area of a circle
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#define PI 3.14

int main(void)
{
    double radius, area;

    printf("Enter radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("The area of this circle is: %lf\n", area);

    return 0;
}