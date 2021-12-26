/**
 * @file 13.c
 * @author xennia316@gmail.com
 * @brief Printing the average word length
 * @version 0.1
 * @date 2021-12-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
int main(void)
{
    char ch;
    float word = 1, letters = 0, average;

    printf("Enter a sentence: ");
    getchar();

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            word++;

        else
            letters++;
    }

    average = (letters / word);
    printf("The average word length is %.2f\n", average);

    return 0;
}