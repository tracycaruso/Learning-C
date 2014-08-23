//  Learning-C-Practice
//  Structures
//  Chapter 9.3


#include <stdio.h>
#include <stdbool.h>

struct date
{
    int month;
    int day;
    int year;
};

int main (void){
    
    struct date today, tomorrow;
    int numberOfDays(struct date d);
    
    printf("Enter today's date (mm dd yyyy) : ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);
    
    // if today is not the last day or the month or if its a leap year the 29th of feburary
    // change date my adding one to the day of the month
    if(today.day != numberOfDays (today)){
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    // else if it is the last day of the month and it is the last month of the year
    // update year and date to the 1st of januarya
    else if(today.month == 12){
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    // else if its not the last day of the year but it is the last day of the month
    // and move to next month and make it the first day of the month
    else{
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    
    printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);
    
    return 0;
}

int numberOfDays (struct date d){
    int days;
    bool isLeapYear (struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30 , 31, 30, 31};
    
    // check to see if the date is the last day of february on a leap year
    // if it is return the 29th to compare the previous condition in the main function
    if(isLeapYear(d) == true && d.month == 2)
        days = 29;
    // if its not a leap year compare the condition to the last day of the current month
    else
        days = daysPerMonth[d.month - 1];
    
    return days;
    
}

// function to check for leap year
bool isLeapYear (struct date d){
    bool leapYearFlag;
    
    // a leap year is divisable by 4 but not 100
    // or it is divisable by 400
    if((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0){
        leapYearFlag = true;
    }
    else{
        leapYearFlag = false;
    }
    
    return leapYearFlag;
    
}


