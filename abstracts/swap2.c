/**
 * @file swap2.c
 * @author xennia316
 * @brief Swapping two values without the use of a third value
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Enter two values to swap: ");
    scanf("%d%d", &x, &y);

    // printf("\n");

    printf("Before the swap: %d and %d", x, y);
    printf("\n");

    x = x + y;
    //giving the first value the sum of the both values.
    y = x - y;
    //subtracting the second value from the sum of both values leaves it assigned to the first value only.
    x = x - y;
    //The new value of y is the original value of x

    printf("The values after swapping are: %d and %d", x, y);
    printf("\n");

    return 0;

}