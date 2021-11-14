#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value)/sizeof (value[0])))
#define INITIAL_BALANCE 100

int main(void)
{
    int i, low_rate, num_years, years;
    double value[5];

    printf("Please enter the interest rate: ");
    scanf("%d", &low_rate);
    printf("Please enter the number of years: ");
    scanf("%d", &num_years);

    printf("\n Years");
    for(i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for(years = 1; years <= num_years; years++)
    {
        printf("%3d      ", years);

        for( i = 0; i < NUM_RATES; i++)
        {
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
    printf("\n");
    }
    return 0;
}