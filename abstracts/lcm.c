/**
 * @file lcm.c
 * @author xennia316
 * @brief Find the lcm of two numbers. The lcm is the least common multiple. 
 * @version 0.1
 * @date 2021-12-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\n\n");
    // if num1 is bigger than num2 then num1 is assigned to max else num2 is assigned to max
    max = (num1 > num2) ? num1 : num2;

    while(1)
    {
        //if there's no remainder when max is divided by num1 and num2 then max is the lcm
        if(max % num1 == 0 && max % num2 == 0)
        {
            printf("%d is the lcm of %d and %d", max, num1, num2);
            printf("\n\n");
            break;
        } 
        //Use max then increment it
         ++max;
    }
    return 0;
}