//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  7.3
//  Fibonacci Numbers : Golden Ratio
//  The sum of the 2 preceding numbers is equal to the current number
//  3 + 5 = 8, 5 + 8 = 13



#include <stdio.h>

int main (void){
    
    // and array with 15 elements
    int Fibonacci[15], i;
    
    // zeroth element is assigned 0
    Fibonacci[0] = 0;
    // first element is assigned 1
    Fibonacci[1] = 1;
    
    // for as long as count between 2 and 14
    for( i = 2; i < 15; i++){
        printf("Fibonacci [%2i] = [Fibonacci[%2i - 2] + Fibonacci[%2i - 1]     ", i, i, i);
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
        printf("Result : %i\n", Fibonacci[i]);
    }
    
    for( i = 0; i < 15; i++ ){
        printf("%i\n", Fibonacci[i]);
    }
    
    
    
    
    return 0;
}