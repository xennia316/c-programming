#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], i;

    printf("Please enter 10 numbers: ");

    for( i = 0; i < N; i++)
    {
         scanf("%d", &a[i]);
    }
    printf("The numbers in reverse format are: ");
    for( i = N-1; i >=0; i--)
        printf("%d", a[i]);

        printf("\n");

        return 0;
}

     
