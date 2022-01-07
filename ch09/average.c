/**
 * @file average.c
 * @author Sonia Amehmbo @xennia316
 * @brief Computes the pairwise average of three numbers
 * @version 0.1
 * @date 2022-01-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
double avg(double a, double b)
{
    return (a + b) / 2;
}
int main(void)
{
    double x, y, z;
    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("Average of %g and %g is: %3g\n", x, y, avg(x, y));
    printf("Average of %g and %g is: %3g\n", y, z, avg(y, z));
    printf("Average of %g and %g is: %3g\n", x, z, avg(x, z));

    return 0;
}