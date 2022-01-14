#include <stdio.h>

int main(void){
    int heigth = 8, length = 12, width = 10, volume,  weigth;
    volume = heigth * length * width;

    printf("Dimensions: %d x %d x %d\n", length, width, heigth);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weigth (pounds): %d\n", weigth);

    return 0;
}