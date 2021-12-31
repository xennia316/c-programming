/**
 * @file reverse2.c
 * @author Sonia Amehmbo @xennia316
 * @brief Modified reverse program.
 * @version 0.1
 * @date 2021-12-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int i, n;

    printf("How many numbers do you want to reverse?: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("In reverse order: ");
    for (i = n - 1; i >= 0; i--)
        printf(" %d", a[i]);

    printf("\n");

    return 0;
}