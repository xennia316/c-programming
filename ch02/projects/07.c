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
    int amount, dollar_20 = 0 , dollar_10 = 0, dollar_05 = 0, dollar_01 = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    dollar_20 = amount / 20;
    amount =  amount - (dollar_20 * 20);

    dollar_10 = amount / 10;
    amount = amount - (amount * 10);

    dollar_05 = amount / 5;
    // amount =  amount - (amount * 5);

    
    dollar_01 = amount - (amount * 01);

    printf("$20 bills: %d\n", dollar_20);
    printf("$10 bills: %d\n", dollar_10);
    printf("$05 bills: %d\n", dollar_05);
    printf("$01 bills: %d\n", dollar_01);

    return 0;
}