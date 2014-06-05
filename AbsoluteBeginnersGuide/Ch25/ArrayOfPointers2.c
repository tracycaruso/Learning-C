//  BasicProgram.c
//  Learning-C-Practice
//
//  Array of Pointers 2
//  Chapter 26 - Absolute Beginners Guide to C
//



#include "stdio.h"




int main (void){
    
    int i;
    char * pDays[7];
    pDays[0] = "Sunday";
    pDays[1] = "Monday";
    pDays[2] = "Tuesday";
    pDays[3] = "Wednesday";
    pDays[4] = "Thursday";
    pDays[5] = "Friday";
    pDays[6] = "Saturday";
    
    for (i = 0; i < 7; i++){
        printf("%s \n" , pDays[i]);
    }
    
    
    
    return 0;
}



/***************************** VOCAB *******************************/
