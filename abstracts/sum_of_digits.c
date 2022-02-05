/**
 * @file sum_of_digits.c
 * @author xennia316
 * @brief Summing all digits of a number
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

//Addition is commutative and accessing digits from behind is relatively easier.
//The addition is done from the last digit
int main(void)
{
    // sum initialised to zero
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // while the number entered is not zero perform addition on all digits entered
    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        // the number is divided by ten everytime to eliminate the digit already added
        number = number / 10;
    }

    printf("The sum of digits of %d is %d\n", number, sum);

    return 0;
}
