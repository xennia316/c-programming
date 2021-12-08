/**
 * @file swap.c
 * @author xennia316
 * @brief Swapping two values using a third value.
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int temp;

    printf("Enter two values in order: ");
    scanf("%d%d", &a, &b);

    printf("Before the swap we have: %d and %d", a, b);
    printf("\n");

    temp = a;
    a = b;
    b = temp;

    printf("After the swap we now have: %d and %d", a, b);
    printf("\n");

    return 0;
}