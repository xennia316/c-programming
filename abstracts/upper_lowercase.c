/**
 * @file upper_lowercase.c
 * @author Sonia Amehmbo @xennia316
 * @brief Display characters 'A' to 'Z' in uppercase or lowercase.
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter 'u' for uppercase or 'l' for lowercase: ");
    scanf("%c", &c);

    if (c == 'u' || c == 'U')
    {
        for (c = 'A'; c <= 'Z'; ++c)
            printf("%c ", c);
    }

    else if (c == 'l' || c == 'L')
    {
        for (c = 'a'; c <= 'z'; ++c)
            printf("%c ", c);
    }

    else
        printf("Invalid input...\n");

    printf("\n");
    return 0;
}