/**
 * @file new.c
 * @author xennia316
 * @brief 
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

    sum = a + x;
    printf("The sum of both numbers is: %d\n", sum);

    printf("Enter a power: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    power = power * sum;


     printf("%d \n", power );
     printf("\n");
     
    

    return 0;
}