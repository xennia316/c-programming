/**
 * @file 09.c
 * @author xennia316
 * @brief converting a for loop to a while loop.
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void){
    int i;
    i = 10;
    while (i >= 1)
    
    {
        i /= 2;
       i++;
    }
         printf("%d\n", i);
        return 0;
}