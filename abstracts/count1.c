/**
 * @file count1.c
 * @author @xennia316
 * @brief counts from 1 to 10
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 10; i >= 1; i++)
        printf("%3d", i);
    printf("\n");

    return 0;
}