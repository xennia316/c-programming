#include <stdio.h>

int main(void){
    int area_code;

    printf("Enter area code: \n");
    scanf("%d\n", &area_code);

    switch(area_code){
        case 229:
             printf("Albany\n");
                break;
        
        case 404: case 470: case 678: case 770:
            printf("Atlanta\n");
                break;
        
        case 478:
            printf("Malcon\n");
                break;
        
        case 706: case 762:
            printf("Columbus\n");
                break;
        
        case 912:
            printf("Savannah");
                break;
        
        default:
            printf("Area code not recognised :(\n");
                break;
        
    }
    return 0;
}