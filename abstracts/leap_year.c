/**
 * @file leap_year.c
 * @author @xennia316
 * @brief CHecks if the year entered is a leap year
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

// This code finds a loop year by first of all diving the year by 4, 100, 400.
//A year is a leap year if it's divisible by 4, 100 and 400.
int main(void)
{
    int year;
    printf("Enter  a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("This is a leap year....\n");
            else
                printf("This is not a leap year...\n");
        }
        else
            printf("This is not a leap year...\n");
    }
    else
        printf("This is not a leap year...");
    return 0;
}