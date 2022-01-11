/**
 * @file perimeter_of_square.c
 * @author Sonia Amehmbo @xennia316
 * @brief The perimeter of a square.
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
 
 int main(void)
 {
      double length, width, perimeter;

      printf("Enter length and width of square respectively: ");
      scanf("%lf %lf", &length, &width);

        perimeter = (length + width) * 2;

    printf("Perimeter of this square is: %.2lf\n", perimeter);

    return 0;
 }