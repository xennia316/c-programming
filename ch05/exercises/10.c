/**
 * @file 10.c
 * @author Xennia316
 * @brief Using switch statements to display a number(in words) after computing it in modulo 3
 * @version 0.1
 * @date 2021-11-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    i = 1;

    switch (i % 3)
    {
    case 0:
         printf("Zero\n");
        //break;
    case 1:
            printf("One\n");
        break;
    case 2:
            printf("Two\n");
        //break;
    
   // default: printf("....")
        //break;
    }
}