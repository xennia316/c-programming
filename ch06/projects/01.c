/**
 * @file 01.c
 * @author xennia316
 * @brief Largest amongst numbers
 * @version 0.1
 * @date 2021-12-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int a, i;

    printf("Enter a number: ");
    scanf("%d", &a);
    if(a != 0 )
    {
    do
    {
        printf("Enter another number: ");
        scanf("%d", &i);
        if( i > a )
        a = i;
    } while (i != 0);

    
    }
    if(i > a)
        printf("The maximum number is %d\n", i);

    else 
        printf("The maximum number is %d\n", a);
    

    return 0;
}
