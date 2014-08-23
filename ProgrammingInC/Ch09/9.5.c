//  Learning-C-Practice
//  Structures
//  Chapter 9.5


#include <stdio.h>

// time structure
struct time{
    int hours;
    int minutes;
    int seconds;
};

int main (void){
    
    // prototypes
    struct time update(struct time now);
    
    // time structure variables
    struct time currentTime;
    struct time updatedTime;
    
    
    // ask user for current time
    printf("Please enter the time (hh mm ss) : ");
    scanf("%i:%i:%i", &currentTime.hours, &currentTime.minutes, &currentTime.seconds);
    
    // past current time to time update function
    updatedTime = update(currentTime);
    
    
    // return updated time
    printf("The updated time is %.2i:%.2i:%.2i\n", updatedTime.hours, updatedTime.minutes, updatedTime.seconds);
    
    return 0;
    
}
// time update function

struct time update(struct time now){
    now.seconds++;
    
    if(now.seconds == 60){
        now.seconds = 00;
        now.minutes++;
        
        if(now.minutes == 60){
            now.minutes = 00;
            now.hours++;
            
            if(now.hours == 24){
                now.hours = 00;
            }
        }
    }
    
    return now;
    
}
