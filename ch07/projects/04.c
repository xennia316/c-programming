/**
 * @file 04.c
 * @author Sonoa Amehmbo @xennia316
 * @version 0.1
 * @date 2021-12-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char tel;

    printf("Enter a number: ");

    while ((tel = getchar()) != '\n')
    {
        switch (toupper(tel))
        {
        case 'A':
        case 'B':
        case 'C':
            printf("2");
            break;

        case 'D':
        case 'E':
        case 'F':
            printf("3");
            break;

        case 'G':
        case 'H':
        case 'I':
            printf("4");
            break;

        case 'J':
        case 'K':
        case 'L':
            printf("4");
            break;

        case 'M':
        case 'N':
        case 'O':
            printf("5");
            break;

        case 'P':
        case 'Q':
        case 'R':
            printf("6");
            break;

        case 'S':
        case 'T':
        case 'U':
            printf("7");
            break;

        case 'V':
        case 'W':
        case 'X':
            printf("8");
            break;

        case 'Y':
        case 'Z':
            printf("9");
            break;

        default:
            putchar(tel);
            break;
        }
    }
    printf("\n");
    return 0;
}