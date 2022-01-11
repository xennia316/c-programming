/**
 * @file area_of_triangle.c
 * @author Sonia Amehmbo @xennia316
 * @brief Area of a trisngle
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    double base, heigth;
    double area;
    printf("Enter base and heigth respectively: ");
    scanf("%lf %lf", &base, &heigth);

    area = 0.5 * base * heigth;

    printf("This is gthe area of the triangle: %.2lf\n", area);
    return 0;
}