/**
 * @file 03.c
 * @author Sonia Amehmbo @xennia316
 * @brief Creating an array with seven bool values. First and last already initialised.
 * @version 0.1
 * @date 2021-12-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    const bool weekend[7] = {[0] = true, [6] = true};
    int n;

    printf("Enter the position of array to display( 0 to 7): ");
    scanf("%d", &n);
    n %= 7;
    printf("%d\n", weekend[n]);

    return 0;
}