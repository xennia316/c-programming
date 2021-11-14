#include <stdio.h>

int main(void){
int year, month, date;

ptrintf("Please enter the date in form yy/mm/dd: ");
scanf(" %d /%d /%d", &year, &month, &date);

printf("Dated this day %d", date);

switch(date){
    case 1: case 21: case 31:
        printf("st");
        break;

    case 2: case 22:
        printf("nd");
        break;
    
    case 3:
        printf("rd");
        break;
    
    default: 
        printf("th"); 
        break;
}

printf("This month ");
    switch (month)
    {
        case 1: printf("January");
            break;
        case 2: printf("February");
            break;
        case 3: printf("March");
            break;
        case 4: printf("April");
            break;
        case 5: printf("May");
            break;
        case 6: printf("June");
            break;
        case 7: printf("July");
            break;
        case 8: printf("August");
            break;
        case 9: printf("September");
            break;
        case 10: printf("October");
            break;
        case 11: printf("November");
            break;
        case 12: printf("December");
            break;
        
        default: printf("invalid month");
            break;
    }

printf("of 20%d", year);

return 0;

}