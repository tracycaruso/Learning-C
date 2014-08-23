//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.8
//  Square Root


#include "stdio.h"

float squareRoot(float x);
float absoluteValue(float x);



int main(void){
    printf("squareRoot (9.0) = %f\n", squareRoot(9.0));
}



float squareRoot(float x){
    
    const float epsilon = .00001;
    float guess = 1.0;
    
    while(absoluteValue(guess * guess - x) >= epsilon)
        guess = ( x / guess + guess ) / 2.0;
    
    return guess;
    
}


float absoluteValue(float x){
    if(x < 0)
        x = -x;
    return(x);
}

