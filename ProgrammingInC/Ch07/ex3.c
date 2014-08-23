//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  ex3
//  Arrays


//  counts the number of similar responses

#include <stdio.h>

int main (void){
    
    
    int ratingCounters[11], i, response, numResponses;
    
    
    for(i = 1; i <= 10; ++i){
        ratingCounters[i] = 0;
    }
    
    printf("Press 999 when you are finished\n");
    
    printf("Enter your responses ( must be between 1 - 10 : \n");
    
    
    for( i = 1; i <= 20; ++i){
        scanf("%i", &response);
        
        if(response == 999){
            break;
        }
        
        if(response < 1 || response > 10)
            printf("Bad response : %i\n", response);
        
        else ++ratingCounters[response];
    }
    
    printf("\n\nRating Number of Responses\n");
    printf("----- -----------\n");
    
    
    for(i = 1; i <= 10; ++i){
        printf("%4i%14i\n", i, ratingCounters[i]);
    }
    
    
    
    
    return 0;
}