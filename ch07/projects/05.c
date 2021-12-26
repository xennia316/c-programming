/**
 * @file 05.c
 * @author Sonia Amehmbo @xennia316
 * @brief Scrabble word sum
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
    char letter;
    int sum = 0;

    printf("Enter your letters: ");

    while ((letter = getchar()) != '\n')
    {
        switch (toupper(letter))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'L':
        case 'N':
        case 'O':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            sum += 1;
            break;
        case 'D':
        case 'G':
            sum += 2;
            break;

        case 'B':
        case 'C':
        case 'M':
        case 'P':
            sum += 3;
            break;

        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            sum += 4;
            break;

        case 'K':
            sum += 5;
            break;

        case 'J':
        case 'X':
            sum += 8;
            break;

        case 'Q':
        case 'Z':
            sum += 10;
            break;

        default:
            break;
        }
    }
    printf("Scrabble value: %d\n", sum);
    return 0;
}