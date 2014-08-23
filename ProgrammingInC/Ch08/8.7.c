//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.7
//  Absolute Value

#include "stdio.h"

float absoluteValue(float n);


int main(void){
    
    printf("%.2f\n", absoluteValue(-15.45));
    printf("%.2f\n", absoluteValue(-5.45));
    printf("%.2f\n", absoluteValue(7.45));
    printf("%.2f\n", absoluteValue(5.45));
    
    
    return 0;
    
}


float absoluteValue(float n){
    
    if(n < 0){
        n = -n;
    }
    
    return n;
    
    
}