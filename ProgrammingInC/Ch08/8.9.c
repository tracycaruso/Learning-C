//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.9
//  Pass an Array to a Function


#include "stdio.h"

int minimum (int values[10]);

int main (void){
    
    int scores[10], i, minScore;
    
    
    printf("Enter 10 scores\n");
    
    // stores scores in array
    for( i = 0; i < 10; i++){
        scanf("%i", &scores[i]);
    }
    
    // passes teh scores array to the minimum function
    // stores return value in minScore
    minScore = minimum(scores);
    
    // print min score
    printf("\nMinimum score is %i\n", minScore);
    
    return 0;
}


int minimum(int values[10]){
    int minValue, i;
    
    // stores the first array element in the min value
    minValue = values[0];
    
    // loops through array
    for(i = 1; i < 10; i++){
        // if current element is less that minValue
        if(values[i] < minValue)
            // store value in min value;
            minValue = values[i];
        
        
    }
    // return the minimum value
    return minValue;
}