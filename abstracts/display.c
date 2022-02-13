/**
 * @file display.c
 * @author xennia316
 * @brief Displaying ten numbers
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{

    int a;
    int i;

    printf("Numbers from 0 to 09: \n");

    //Continously print out the numbers incremenously until they become bigger than 9
    for (i = 0; i <= 9; i++)

        printf("%d\n", i);

    return 0;
}