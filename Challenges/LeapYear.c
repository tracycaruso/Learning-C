// Leap Year

#include "stdio.h"
#include "stdbool.h"

int main (void){
    
    bool isLeapYear(int num);
    int year;
    
    printf("Please enter a year to see if it is a leap year : ");
    scanf("%i", &year);
    
    if(isLeapYear(year)){
        printf("%i is a leap year\n", year);
    }
    else{
        printf("%i is not a leap year\n", year);
    }
    
    return 0;
    
}

bool isLeapYear(int num){
    
    bool leapYear;
    
    if((num % 4 == 0 && num % 100 != 0) || num % 400 == 0){
        leapYear = true;
    }
    else{
        leapYear = false;
    }
    
    return leapYear;
}
