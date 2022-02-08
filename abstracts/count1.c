/**
 * @file count1.c
 * @author @xennia316
 * @brief counts from 1 to 10 for a specific number of times
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

//PLEASE FIX ME!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!.
int first(void)
{
    int i;
    for (i = 10; i >= 1; i++)
        printf("%3d", i);
    printf("\n");

    for (i = 1; i <= 10; i++)
        printf("%3d", i);
    printf("\n");
    return 0;
}

int main(void)
{
    int a, j;
    printf("Enter a  value: ");
    scanf("%d", &a);

    for(j = 0; j <= a; j++)
    {
        first();
    }
    return 0;
}