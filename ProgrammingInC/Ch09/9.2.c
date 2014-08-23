//  Learning-C-Practice
//  Structures
//  Chapter 9.2


#include <stdio.h>

int main (void){
    
    struct date
    {
        int month;
        int day;
        int year;
    };
    
    struct date today, tomorrow;
    
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);
    
    // if todays date is not the last day of the month
    // add just one day to the month
    // so days 1 - 27/30 will be calculated normally
    if(today.day != daysPerMonth[today.month - 1]){
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    // if it is the last day of the month
    // and it is the last month of the year
    // start a new year
    else if (today.month == 12){
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    // otherwise if it is the last day of the month not at the end of the year
    // start a new year on the first of the month
    else{
        tomorrow.day = 1;
        tomorrow.month = today.month +1;
        tomorrow.year = today.year;
    }
    
    printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);
    
    return 0;
}


