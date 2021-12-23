/**
 * @file sum3.c
 * @author @xennia316
 * @brief Squaring with the odd method
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
int main(void)
{
    int i, n, odd, square;

    printf("This program prints a table of squares\n");
    printf("Enter the number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for(square = 1; i <= n; odd += 2)
    {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }
    return 0;
}