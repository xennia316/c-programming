/**
 * @file 04.c
 * @author xennia316
 * @brief Takes an amount from user and prints 5% of that amount
 * @version 0.1
 * @date 2021-11-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>


int main(void)
{
    float amount, new_amount, tax;

    printf("Please enter amount: ");
    scanf("%f", &amount);
    tax = (5.0f/100.0f);
    new_amount = (amount + amount*tax);

    printf("With tax added: %f\n", new_amount);
    printf("\n");
    return 0;
}