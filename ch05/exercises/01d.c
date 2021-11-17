/**
 * @file 01d.c
 * @author xennia316
 * @brief 
 * @version 0.1
 * @date 2021-11-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 3;
    j = 4;
    k = 5;

    printf("%d\n", i % j + i < k);
  return 0;
}