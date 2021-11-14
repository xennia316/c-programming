//This project requires taking  in time in th 24hour format from user and displaying it in 12hour format.

#include <stdio.h> 
int main(void)
{
    int hour, minutes, seconds;
    printf("Please enter timme in 24hour format (hour:min:sec): ");
    scanf("%d:%d:%d", &hour ,&minutes, &seconds);

    //printf("The time you entered is:%d:%d:%d\n", hour, minutes, seconds);
    switch (hour)
    {
        case 1:case 2:case 3:case 4:case 5:case 6: case 7:case 8:case 9:case 10:case 11: case 12:
            printf("hour%d:%d\n", minutes, seconds);
                 break;
        case 13:
            printf("1:%d:%d\n", minutes, seconds);
                break;
        case 14:
            printf("2:%d:%d\n", minutes, seconds);
                break;
        case 15:
            printf("3:%d:%d\n", minutes, seconds);
                break;
        case 16:
            printf("4:%d:%d\n", minutes, seconds);
                break;
        case 17:
            printf("5:%d:%d\n", minutes, seconds);
                break;
        case 18:
            printf("6:%d:%d\n", minutes, seconds);
                break;
        case 19:
            printf("7:%d:%d\n", minutes, seconds);
                break;
        case 20:
            printf("8:%d:%d\n", minutes, seconds);
                break;
        case 21:
            printf("9:%d:%d\n", minutes, seconds);
                break;
        case 22:
            printf("10:%d:%d\n", minutes, seconds);
                break;
        case 23:
            printf("11:%d:%d\n", minutes, seconds);
                break;
        case 24:
            printf("12:%d:%d\n", minutes, seconds);
                break;

    default: printf("This time does not exist\n");
        break;
        printf("The time you entered is:%d:%d:%d\n", hour, minutes, seconds);
    }
    //usually easier to just use the hour modulo 13 since the clock works in modulo 13.

    return 0;
}