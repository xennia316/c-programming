/**
 * @file count.c
 * @author @xennia316
 * @brief Counts from  specified number to zero
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

// function that takes in the intial value and decrements printing each new value
int count(int a)
{
    int i;
    printf("Enter an initial value: ");
    scanf("%d", &a);

    for (i = a; i >= 0; i--)
    {
        printf("%5d\n", i);
        // break;
    }
    return i;
}

int main(void)
{
    int x, y;
    printf("Enter the counting period: ");
    scanf("%d", &x);
    //specifying the number of times function counts should be called according to input x
    for (y = x; y >= 0; y--)
    {
        count(x);
    }
    return 0;
}