/**
 * @file length.c
 * @author xennia316
 * @brief Determines the length of a message.
 * @version 0.1
 * @date 2021-12-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int len = 0;
    char ch;

    printf("Input a message here: ");
    ch = getchar();

    while (ch != '\n')
    {
        len ++;
        ch = getchar();
    }
    printf("Your message has %d character(s) \n", len);
    return 0;
}