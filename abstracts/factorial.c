/**
 * @file factorial.c
 * @author xennia316
 * @brief Finding the factorial of a number
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int number;
    int i;

    //initialise factorial to 1
    long fact = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    //as long as i is smaller or the same as number the factorial becomes 
    //the previous factorial multiplied by i.
    //factorial is then incremented
    for (i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    printf("%d! is %ld\n", number, fact);

    return 0;
}