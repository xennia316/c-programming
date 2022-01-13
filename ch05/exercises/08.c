/**
 * @file 08.c
 * @author xennia316
 * @brief condensing many ifs into one if statement
 * @version 0.1
 * @date 2021-11-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age >= 13 && age <= 19)
        printf("%d is true\n", age);
    if (age < 13 || age > 19)
        printf("%d is False\n", age);

    return 0;
}