/**
 * @file 01.c
 * @author xennia316
 * @brief A program to display date in the form yyyymmdd
 * @version 0.1
 * @date 2021-11-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main(void){
    int day, month, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("You entered %.4d%.2d%.2d\n", year, month, day);
    return 0;
}