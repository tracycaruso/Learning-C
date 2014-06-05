/***************************** VOCAB *******************************/

//  BasicProgram.c
//  Learning-C-Practice
//
//  Search Parallel Arrays
//  Chapter 22 - Absolute Beginners Guide to C
//



#include "stdio.h"



int main (void){
    
    int i;
    int found = 0;
    int userNum;
    
    int actNum[5] = {111, 112, 113, 114, 115};
    float actBal[5] = {0.00, 1.99, 2.99, 3.99, 4.99};
    
    printf("What is your bank account number? : ");
    // Gets users number
    scanf(" %d" , &userNum);
    
    // loops through account number and searches for the the matching user number
    for (i = 0; i < 100; i++){
        if(actNum[i] == userNum){
            // when user account is found, set found to true and break loop
            found = 1;
            break;
        }
    }
    
    
    if(found){
        // use the counters current position to match the parallal account balance - Print balance
        printf("Your account balance is $%2.f \n" , actBal[i]);
    }
    else{
        // if number wasnt found tell user
        printf("That account doesn't exist.\n");
    }
    
    return 0;
    
    
}



/***************************** VOCAB *******************************/
// Parallel Arrays : 2 arrays that carry related data
