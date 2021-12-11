/**
 * @file reverse_string.c
 * @author xennia316
 * @brief Reversing all characters of a string
 * @version 0.1
 * @date 2021-12-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    char string[1000];
    char reverse[1000];
    int i, j, count = 0;

    printf("Enter the string to be reversed: ");
    scanf("%s", string);
    printf("\n");

    printf("\nString before Reverse: %s", string);

    while(string[count] != '\0')
    {
        count ++;
    }
    j = count - 1;

    for (i = 0; i < count; i++)
    {
        reverse[i] = string[j];
        j--;
    }

    printf("\nThe string after reverse is: %s", reverse);
    printf("\n\n\n");

    return 0;
}