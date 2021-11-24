/**
 * @file 07.c
 * @author xennia316
 * @brief modifying exercise 2 to use a for loop rather than the do and while...
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void){
    int i;
        for( i = 9384; i > 0; i--){
            printf("%d\n", i);

             i /=  10;
    }
}