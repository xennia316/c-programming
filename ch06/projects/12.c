/**
 * @file 12.c
 * @author Sonia Amehmbo@xennia316
 * @brief Modifying the 11.c program
 * @version 0.1
 * @date 2021-12-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */#include <stdio.h>
int main(void)
{
    float e = 1.0;
    int i;
    int range;
    long range_fact = 1;
    float E;

    printf("Enter the range of e: ");
    scanf("%d", &range);

    printf("Enter your largest value for e: ");
    scanf("%f", &E);
    printf("\n");

    for (i = 1; i <= range; i++)
    {
        range_fact = range_fact * i;
        e += 1.0 / range_fact;

        if ( e < E)
            printf("The value of e is: %f\n", e);
            printf("\n");
    }
    printf("The value of %d! is: %ld\n", range, range_fact);
    printf("The value of e is: %f\n", e)  ;
    return 0;
}