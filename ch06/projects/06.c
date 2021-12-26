/**
 * @file 06.c
 * @author xennia316@gmail.com
 * @brief Printing even squares
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
int main(void)
{
    int range, i, square;
    printf("Enter a range.\n");
    printf(" (From 1 to ): ");
    scanf("%d", &range);

    

    for (i = 1; (i * i) <= range; i++)
    {
        if ((i * i) % 2 == 0)
            printf("%5d %10d\n", i, (i * i));
    }

    return 0;
}