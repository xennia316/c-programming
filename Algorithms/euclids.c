#include <stdio.h>

int euclid(int m, int n)
{
    printf("Program begin's here");
    int r, count = 0;
    do
    {
        r = m % n;
        m = n;
        n = r;
        count++;

    } while (n != 0);
    printf("\n \b This program ran %d times\n", count);
    return m;
}

int main()
{
    int b = euclid(31415, 14142);
    printf("...%d", b);
    return 0;
}