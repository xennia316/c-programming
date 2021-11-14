#include <stdio.h>
int main(void)
{
    int num;
    printf("Please enter number: ");
    scanf("%d", &num);


    if(num >= 0 && num <= 9) 
        printf("This is a single digit number\n");
    if(num > 9 && num <= 99)
        printf("This is a double digit number\n");
    if(num > 99 && num <= 999)
        printf("This number has 3 digits\n");
    if(num > 999 && num <= 9999)
        printf("This number has 4 digits\n");
    else printf(" This number has more than four digits\n");


    return 0;
}