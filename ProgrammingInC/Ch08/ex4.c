//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 8
//  ex 4
//  Square Root


#include "stdio.h"

float squareRoot(float x, float eps);
float absoluteValue(float x);

int main(void){
    printf("squareRoot (9.0) = %f\n", squareRoot(9.0,  .00001));
}



float squareRoot(float x, float eps){
    
    
    float guess = 1.0;
    
    while(absoluteValue(guess * guess - x) >= eps){
        printf("before : %f\n", guess);
        guess = ( x / guess + guess ) / 2.0;
        printf("after : %f\n", guess);
    
    }
    return guess;
    
}


float absoluteValue(float x){
    if(x < 0)
        x = -x;
    return(x);
}

