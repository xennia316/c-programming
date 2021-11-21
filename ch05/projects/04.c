/**
 * @file 04.c
 * @author xennia316
 * @brief Describing the wind speed as per value provided by the user
 * @version 0.1
 * @date 2021-11-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int speed;

        printf("Enter the wind speed value: ");
        scanf("%d", &speed);

            if(speed < 1)
                printf("Calm\n");
            
            else if(speed < 3)
                printf("Light air\n");

            else if(speed < 27)
                printf("Breeze\n");

            else if(speed < 47)
                printf("Gale\n");

            else if(speed < 63)
                printf("Storm\n");

            else printf("Huricane\n");
    return 0;
}