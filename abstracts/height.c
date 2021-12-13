/**
 * @file height.c
 * @author xennia316
 * @brief Displaying the height category
 * @version 0.1
 * @date 2021-12-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main(void)
{
    int height;
    printf("Enter the persons height in centimeters: ");
    scanf("%d", &height);
    
    if(height < 150)
    {
        printf("This person is experiencing dwarfism.\n\n");

    }

    else if(height >= 150 && height < 165)
    {
        printf("This person has an average height\n\n");
    }

    else if(height >= 165 && height < 195)
        {
            printf("This is a tall person.\n\n");
        }
    else
        printf("Inexistend or abnormal height.\n\n");

return 0;
}