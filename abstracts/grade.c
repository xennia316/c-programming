/**
 * @file grade.c
 * @author yxennia316
 * @brief Check quality of grades
 * @version 0.1
 * @date 2021-12-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter grade: ");
    scanf("%d", &grade);

    for(grade = 0; grade < 20; grade ++)
       { printf("Very poor\n\n");
        break;
       }
    for(grade = 0; grade >= 20 && grade < 40; grade++)
        {
            printf("Poor\n\n");
            break;
        }
    for(grade = 0; grade  >= 40 && grade < 50; grade++ )
    {
        printf("Slightly below average\n\n");
        break;
    }
    for(grade =0; grade >= 50 && grade < 60; grade ++)
    {
        printf("Averade\n\n");
        break;
    }
    for(grade = 0; grade >= 50 && grade < 80; grade++)
    {
        printf("good\n\n");
        break;
    }
    for(grade = 0; grade >= 80; grade ++)
    {
        printf("Excellent\n\n");
        break;
    }

    return 0;
}
