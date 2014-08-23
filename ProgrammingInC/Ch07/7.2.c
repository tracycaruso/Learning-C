//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  7.2
//  Arrays


//  counts the number of similar responses

#include <stdio.h>

int main (void){
    
    // set at 11 to make the subscripts match the natural order of numbers
    int ratingCounters[11], i, response;
    
    // start the count at one and contiue until 10
    // 0 in the 1st through 10th element of the ratingCounter array
    for(i = 1; i <= 10; ++i){
        ratingCounters[i] = 0;
    }
    
    // Prompts user to print the survey responses
    printf("Enter your responses ( must be between 1 - 10 : \n");
    
    // Stores 20 responses
    for( i = 1; i <= 20; ++i){
        scanf("%i", &response);
        
        // checks to see if response is valid
        // bad responses are not stored but are counted out of the 20
        if(response < 1 || response > 10)
            printf("Bad response : %i\n", response);
        
        // stores user responses in ratingCounter
        else ++ratingCounters[response];
    }
    
    printf("\n\nRating Number of Responses\n");
    printf("----- -----------\n");
    
    // Prints current number and corresponding ratingCount
    // increments until 10 is reached and printed
    for(i = 1; i <= 10; ++i){
        printf("%4i%14i\n", i, ratingCounters[i]);
    }
    
    
    
    
    return 0;
}