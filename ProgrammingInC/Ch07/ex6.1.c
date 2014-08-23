//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  ex 7
//  Display a Fibonacci Sequence without an array
//  number = (number - 1) + (number - 2)


#include <stdio.h>

int main (void){
    int i, first = 0, second = 1, next = 0;
    
    for(i = 0; i < 10; i++){
        
        next = first + second;
        first = second;
        second = next;
        
        printf("%i\n", next);
        
    }
    
    
    
}





