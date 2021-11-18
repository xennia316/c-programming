/**
 * @file 02a.c
 * @author xennia316
 * @brief illustrates logical operators
 * @version 0.1
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int i, j, k;

     i = 5;
     j = 0;
     k = -5;

        printf("%d\n", i && j || k);
        return 0;
        
}