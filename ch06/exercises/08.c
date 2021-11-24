/**
 * @file 08.c
 * @author xennia316
 * @brief running piece of code from book.
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void){
    int i;
    for(i = 10; i >= 1; i /= 2){
        printf("%d\n", i++);

        return 0;
    }
}