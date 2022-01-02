/**
 * @file 05.c
 * @author Sonia Amehmbo @xennia316
 * @brief fibonacci numbers
 * @version 0.1
 * @date 2022-01-02
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(void)
{
    int i;
    long int fib_numbers[40];
    fib_numbers[0] = 0;
    fib_numbers[1] = 1;

    for (i = 2; i < 40; i++)
    {
        fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
    }
    for (i = 0; i < 40; i++)
        printf("%5d %50ld\n", i, fib_numbers[i]);
    return 0;
}