#include <stdio.h>

int main(void){

    int a;

    printf("please enter a number: ");
    scanf(" %d\n", &a);

    if (a < 0)
    {
        printf("This number lies on the negative side of the number line.\n");
    }
    else if (a == 0)
    {
        printf("This is zero\n");
    }
    else 
    {
     printf("This number is positive\n");
    }
     return 0;
}