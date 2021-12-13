/**
 * @file hour_minute.c
 * @author xennia316
 * @brief Takes the number of hours and minutes and displays the total number of hours.
 * @version 0.1
 * @date 2021-12-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int hours, minutes,final;

    printf("Enter the number of hours: ");
    scanf("%d", &hours);
    printf("\n");

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    printf("\n");

    final = (hours * 60) + minutes;

    printf("the number of minutes you entered is %d.", final);

    printf("\n");
    return 0;


}