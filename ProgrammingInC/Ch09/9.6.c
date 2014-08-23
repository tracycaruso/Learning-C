//  Learning-C-Practice
//  Structures
//  Chapter 9.6
//  Array of a Structures


#include <stdio.h>

// declare structure

struct time{
    int hours;
    int minutes;
    int seconds;
};

int main (void){
    
    //prototype
    struct time update(struct time now);
    
    //current time array
    struct time allTime[5] = { {10, 40, 55}, {23, 59, 59}, {01, 59, 59}, {18, 01, 59}, {22, 22, 22} };
    
    // counter
    int i;
    
    // loop through times and pass to the updated function
    
    // print time before
    for(i = 0; i < 5; i++){
        printf("The Current time is %.2i:%.2i:%.2i\n", allTime[i].hours, allTime[i].minutes, allTime[i].seconds);
        
        // pass array element to function
        allTime[i] = update(allTime[i]);
        
        printf("The Updated time is %.2i:%.2i:%.2i\n\n", allTime[i].hours, allTime[i].minutes, allTime[i].seconds);
        
        
    }
    
    
    
    
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
            
            if(now.hours == 23){
                now.hours = 00;
            }
        }
    }
    
    return now;
    
}


