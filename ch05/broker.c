/**
 * @file broker.c
 * @author xennia316@gmail.com
 * @brief Brokers commission
 * @version 0.1
 * @date 2021-12-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main (void)
{
    float commission, value;

    printf("Please enter the value: ");
    scanf("%f", &value);

    if (value < 2500)
    commission = 0.017f*value + 30;
    
    else if( value < 6250)
    commission = 56 + 0.0066f*value;

    else if( value < 20000)
    commission = 76 + 0.0034f*value;

    else if( value < 50000)
    commission = 100 + 0.0022f*value;

    else if(value < 500000)
    commission = 155 + 0.0011f*value;

    else 
   commission = 255 + 0.0009f*value;

      if( commission < 39.00f)
      commission = 39.00f;
 
 printf("The commission is %f\n", commission);

return 0;
}