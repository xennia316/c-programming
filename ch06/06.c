/**
 * @file 06.c
 * @author xennia316
 * @brief transforming 01.c to a single for statement.
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
int i;
for( i = 1; i<=128; i++){
    printf("%d\n", i);
    i *= 2;
}
    return 0;
}
