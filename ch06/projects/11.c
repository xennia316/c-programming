/**
 * @file 11.c
 * @author Sonia Amehmbo@xennia316
 * @brief the value of e(1 +... 1/n!)
 * @version 0.1
 * @date 2021-12-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
int main(void)
{
    float e = 1.0;
    int i;
    int range;
    long range_fact = 1;

    printf("Enter the range of e: ");
    scanf("%d", &range);

    for(i = 1; i <= range; i++)
    {
        range_fact = range_fact * i;
        e += 1.0 / range_fact;
    }
    printf("The value of %d! is: %ld and the value of e is: %f\n", range, range_fact, e);
    return 0;
}