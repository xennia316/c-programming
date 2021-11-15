#include <stdio.h>

int main(void)
{
    int num1, num2, denum1, denum2, result_num, result_denum;
    printf("Enter the fractions: ");
    scanf("%d/%d + %d/%d", &num1, &denum1, &num2, &denum2);

    result_denum = denum1 * denum2;
    result_num = num1 *denum2 + num2 * denum2;

    printf("The result is: %d/%d\n", result_num, result_denum);
    return 0;

    
    

}