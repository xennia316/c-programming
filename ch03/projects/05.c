/**
 * @file 05.c
 * @author xennia316
 * @brief 4 by 4 arrangement of 16 numbers
 * @version 0.1
 * @date 2021-11-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4;
    int row_sum, row1, row2, row3, row4, column1, column2, column3, column4, column_sum, diagonal_sum;
    printf("Enter 16 numbers in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &b1, &b2, &b3, &b4, &c1, &c2, &c3, &c4, &d1, &d2, &d3, &d4);
    printf("%4d %4d %4d %4d\n", a1, a2, a3, a4);
    printf("%4d %4d %4d %4d\n", b1, b2, b3, b4);
    printf("%4d %4d %4d %4d\n", c1, c2, c3, c4);
    printf("%4d %4d %4d %4d\n", d1, d2, d3, d4);

        row1 = a1 + a2 + a3 + a4;
        row2 = b1 + b2 + b3 + b4;
        row3 = c1 + c2 + c3 + c4;
        row4 = d1 + d2 + d3 + d4;
             row_sum =  row1 + row2 + row3 +row4;
    printf("Sum of rows is: %4d %4d %4d %4d\n", row1, row2, row3, row4);

        column1 = a1 + b1 + c1 + d1;
        column2 = a2 + b2 + c2 + d2;
        column3 = a3 + b3 + c3 + d3;
        column4 = a4 + b4 + c4 + d4;
             column_sum = column1 + column2 + column3 + column4;
    printf("Sum of columns is: %4d %4d %4d %4d\n", column1, column2, column3, column4);

            diagonal_sum = a1 + b2 + c3 + d4;

    printf("Diagonal sum is: %d\n", diagonal_sum);
        if(row_sum == column_sum && row_sum == diagonal_sum)
        printf("This is a magic square\n");

        return 0;







}