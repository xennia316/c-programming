/**
 * @file multiplication_table.c
 * @author xennia316
 * @brief Printing multiplication table of an entered number.
 * @version 0.1
 * @date 2021-12-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

     printf("The multiplication table for %d is: \n",  n);
    for(i = 0; i <= 12; ++i)
    {
       
        printf("%d * %d = %d", n, i, n * i);
        printf("\n");
    }
    return 0;
    
}