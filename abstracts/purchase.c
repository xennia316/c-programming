/**
 * @file purchase.c
 * @author @xennia316
 * @brief Determines the number of items a particular amount can buy and how much will be left
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#define RICE 20;
#define BEANS 30;
#define SOYA 50;

int main(void)
{
    int amount;
    char stock;

    printf("Enter amount here: ");
    scanf("%d", &amount);

    printf("Enter a for rice, b for beans, c for soya: ");
    scanf(" %c", &stock);
    printf("\n");

    if(stock == 'a' || stock == 'b' || stock == 'c')
    {

        switch (stock)
        {
        case 'a':
            printf("You can get %d bags of rice\n", (amount / 20));
            printf("Your balance will be %d\n", amount % 20);
            break;
        case 'b':
            printf("You can get %d bags of beans\n", (amount / 30));
            printf("Your balance will be %d\n", amount % 30);
            break;
        case 'c':
            printf("You can get %d sticks of soya\n", (amount / 50));
            printf("Your balance will be %d\n", amount % 50);
            break;

        default:
            printf("You have %d amount of money\n", amount);
            printf("The character you entered is invalid\n");
        }
    }
    return 0;
}