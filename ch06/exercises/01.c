/**
 * @file 01.c
 * @author xennia316
 * @brief printing statements associated with the while loop.
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{ 
    int i;
    i = 1;
    while (i <= 128){
        printf("%d\n", i);
        i *= 2;
    }
    return 0;
}