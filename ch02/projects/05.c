/**
 * @file 05.c
 * @author Sonia Amehmbo @xennia316
 * @brief Polynomial 
 * @version 0.1
 * @date 2021-12-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
int main(void)
{
    int x;
    int function;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    function = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x )- (x * x) + (7 * x) - 6;

    printf("The answer is: %d\n", function);

    return 0;
}