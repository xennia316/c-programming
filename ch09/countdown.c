/**
 * @file countdown.c
 * @author Sonia Amehmbo @xennia316
 * @brief Counts down 10 times
 * @version 0.1
 * @date 2022-01-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

void print_count(int n){
    printf("T minus %d and counting\n", n);
}

int main(void)
{
    int i;

    for(i = 10; i > 0; --i)
    {
        print_count(i);
    }
    return 0;
}