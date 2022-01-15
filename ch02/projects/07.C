/**
 * @file 07.C
 * @author Sonia Amehmbo @xenia316
 * @brief Payment with the smallest number of bills
 * @version 0.1
 * @date 2022-01-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(void)
{
    int amount, dollar_20 = 0, dollar_10 = 0, dollar_05 = 0, dollar_01 = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);



    dollar_20 = amount % dollar_20;
    dollar_10 = dollar_20 % dollar_10;
    dollar_05 = dollar_10 % dollar_05;
    dollar_01 = dollar_05 % dollar_01;

    printf("$20 bills: %d", dollar_20);
    printf("$10 bills: %d", dollar_10);
    printf("$05 bills: %d", dollar_05);
    printf("$01 bills: %d", dollar_01);

    return 0;
}