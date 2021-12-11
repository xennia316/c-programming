/**
 * @file average.c
 * @author xennia316
 * @brief average of numbers
 * @version 0.1
 * @date 2021-12-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int n, i;
    float sum = 0, x;

    printf("Enter number of elemnts ");
    scanf("%d", &n);
    printf("Enter %d elements \n\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }
    printf("\n\n");
    printf("Average of the entered numbers is %f\n", (sum/n));

    return 0;
}