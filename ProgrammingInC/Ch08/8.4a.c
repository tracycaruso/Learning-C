//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.4a
//  Triangle number
//  Using the rule n(n+1)/2
//  Double the size of a triangle by multiplying the number by the number + 1
//  Then divide by two to get the triangle
/*
 
 Triangle 4
 
 4 * (4 + 1)        /2
 
 * * * *         o o o o
 * * * *         * o o o
 * * * *         * * o o
 * * * *         * * * o
 * * * *         * * * *
 
 Triangle 4 = 10
 
 */







#include <stdio.h>

int triangle(int n);


int main(void){
    
    triangle(4);
    triangle(20);
    triangle(50);
    
    return 0;
}


int triangle(int n){
    
    auto int tri;
    
    tri = n * (n+1)/2;
    
    return printf("%i\n", tri);
    
}




