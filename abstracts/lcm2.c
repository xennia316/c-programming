/**
 * @file lcm2.c
 * @author @xennia316
 * @brief Finding lcm with the aid of a predefined function
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdbool.h>

int lcm(int a, int b)
{
    int i = (a > b) ? a : b;
    while (1)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("The lcm of %d and %d is %d\n", a, b, i);
            printf("\n");
            break;
        }
        i++;
    }
    return i;
}
int main(void)
{
    int a, b;
    printf("Enter two numbers to find their lcm's: ");
    scanf("%d %d", &a, &b);

    int x = lcm(a, b);

    printf("%d \n", x);

    return 0;
}