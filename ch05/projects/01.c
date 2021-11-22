/**
 * @file 01.c
 * @author xennia316
 * @brief Uses if statements to check th number of digits in every number
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int num;

        printf("Enter number: ");
        scanf("%d", &num);

            if(num <= 9)
                printf("This number has one digit\n");
            
            else if(num <= 99)
                printf("This number has two digits\n");

            else if(num <= 999)
                printf("This number has three digits\n");

            else if(num <= 9999)
                printf("This number has four digits\n");

            else 
                printf("This number has more than four digits\n");

    return 0;
}