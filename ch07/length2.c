/**
 * @file length2.c
 * @author xennia316
 * @brief Determines the length of a message
 * @version 0.1
 * @date 2021-12-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    char ch;
    int len = 0;

    printf("Enter a message: ");

    while(getchar() != '\n')
        len ++;
    printf("The message you entered has %d character(s). \n", len);

    return 0;
}