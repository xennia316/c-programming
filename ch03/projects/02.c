/**
 * @file 02.c
 * @author xennia316
 * @brief Program to format a users product information
 * @version 0.1
 * @date 2021-11-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
int main(void)
{
    int number, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year); 

    printf("Item \t\t Unit \t\t Purchase\n    \t\t  Price \tDate\n");
    printf("%4d \t\t $   %.2f \t %.2d/%.2d/%.4d\n", number, unit_price, month, day, year);

    return 0;

}