/**
 * @file vote.c
 * @author xennia316
 * @brief To check if a candidate is eligible for voting.
 * @version 0.1
 * @date 2021-12-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#define vote_age 21

int main(void)
{
    int age, years_left;

    printf("Enter your age: ");
    scanf("%d", &age);

    years_left = vote_age - age;

    if(age < vote_age)
       { printf("Sorry. You're not allowed to vote.\n");
        printf("You'll be able to vote in %dyears to come.\n", years_left);
       }
    else
        printf("You can vote. Be wise\n");

return 0;


}