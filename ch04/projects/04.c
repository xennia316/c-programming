/**
 * @file 04.C
 * @author Sonia Amehmbo @xennia316
 * @brief Displays the octal equivalence of a decimal number.
 * @version 0.1
 * @date 2022-01-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    int decimal, octal;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal);

   while(decimal > 8)
   {
       octal = decimal % 8;
       decimal / 8;
   }
   
   printf("%4d%d\n",decimal, octal);
    
    return 0;
    
}