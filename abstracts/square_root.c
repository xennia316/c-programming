/**
 * @file square_root.c
 * @author Sonia Amehmbo@xennia316
 * @brief Finding the square root of a number.
 * @version 0.1
 * @date 2021-12-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <math.h>
int main(void)
{
    int number;
    double square_root;

    printf("Enter a number: ");
    scanf("%d", &number);

    square_root = sqrt(number);

    printf("The square root of %d is: %f\n", number, square_root);
    return 0;
}