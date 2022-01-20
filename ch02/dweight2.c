/**
 * @file dweigth2.c
 * @author @xennia316
 * @brief 
 * @version 0.1
 * @date 2022-01-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    int heigth, length, width, volume, weigth;

    printf("Enter heigth of box: ");
    scanf("%d", &heigth);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = heigth * length * width;
    weigth = (volume + 165) / 166;

     printf("Dimensions: %d x %d x %d\n", length, width, heigth);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weigth (pounds): %d\n", weigth);

    return 0;

}