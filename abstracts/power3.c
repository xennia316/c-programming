/**
 * @file new.c
 * @author xennia316
 * @brief Finds the sum of two numbers and raises them to a power
 * @version 0.1
 * @date 2021-12-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int a;
    int n;
    int x, sum, i, power = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("\n");
    printf("Enter another number: ");
    scanf("%d", &x);

    //finds sum of two numbers
    sum = a + x;
    printf("The sum of both numbers is: %d\n", sum);

    printf("Enter a power: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        power = power * sum;

    printf("%d \n", power);
    printf("\n");

    // sums two numbers and raises them to a certain power from user
    return 0;
}