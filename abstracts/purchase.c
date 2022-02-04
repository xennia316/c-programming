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
//defining the price of every item available
#define RICE  20
#define BEANS 30
#define SOYA 50

int main(void)
{
    int amount;
    char stock;
    int new_quantity;

    printf("Enter amount here: ");
    scanf("%d", &amount);

    printf("Enter a for rice, b for beans, c for soya: ");
    scanf(" %c", &stock);

    if (stock == 'a' || stock == 'b' || stock == 'c')
    {
        //switching between the three available items
        switch (stock)
        {
        case 'a':
            printf("You can get %d bags of rice\n", (amount /  RICE));
            printf("Your balance will be %d\n", amount %  RICE);
            break;
        case 'b':
            printf("You can get %d bags of beans\n", (amount / BEANS));
            printf("Your balance will be %d\n", amount % BEANS);
            break;
        case 'c':
            printf("You can get %d sticks of soya\n", (amount / SOYA));
            printf("Your balance will be %d\n", amount % SOYA);
            break;

        default:
            printf("You have %d amount of money\n", amount);
            printf("The character you entered is invalid\n");
        }
    }
    //if item is not found
    else
        printf("Imvalid input\n");

    //Ask the user how much of the selected item they'll like
    printf("How much of %c will you like?: ", stock);
    scanf("%d", &new_quantity);

    switch(new_quantity)
    {
        case 'a':
        if(new_quantity < amount - (new_quantity* RICE))
        {
            amount = amount - new_quantity*20;
            printf("Your balance is %d(CFA)\n", amount);
            printf("You bought %d bags of rice\n", new_quantity);
        }
        break;
        case 'b':
        if(new_quantity < amount - (new_quantity*BEANS))
        {
            amount = amount - new_quantity*30;
            printf("Your balance is %d(CFA)\n", amount);
            printf("You bought %d bags of rice\n", new_quantity);
        }
        break;
        case 'c':
        if(new_quantity < amount - (new_quantity*SOYA))
        {
            amount = amount - new_quantity*SOYA;
            printf("Your balance is %d(CFA)\n", amount);
            printf("You bought %d bags of rice\n", new_quantity);
        }
        break;
        default: 
            printf("You cannot get that much\n");
            break;
    }
    return 0;
}