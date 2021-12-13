/**
 * @file quadrant.c
 * @author xennia316
 * @brief Display the quadraant to which a coordinate belongs
 * @version 0.1
 * @date 2021-12-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
int main(void)
{
    int x_coordinate;
    int y_coordinate;

    printf("Enter the x and y coordinates.");
    scanf("%d %d", &x_coordinate, &y_coordinate);

    printf("There exist only four quadrants'\n\n");

    if(x_coordinate > 0 && y_coordinate > 0)
    {
        printf("This set of points are in the first quadrant.\n\n");

    }

    else if( x_coordinate < 0 && y_coordinate > 0)
    {
        printf("This set of boys are in the second quadrant.\n\n");
    }

    else if( x_coordinate < 0 && y_coordinate < 0)
    {
        printf("This set of points are in the third quadrant.\n\n");
    }

    else
        printf("This set of points are in the fourth quadrant.\n\n");

return 0;

    
}