//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  ex 7
//  Display a Fibonacci Sequence without an array
//  number = (number - 1) + (number - 2)


#include <stdio.h>

int main (void){
    
    int numA = 0;
    int numB = 1;
    int i;
    
    
    for(i = 0; i < 10; i += 2){
        // ex: A = A + B
        // ex: 0 = 0 + 1
        // ex: 1 = 0 + 1
        // ex: 3 = 1 + 2
        numA = numA + numB;
        printf("%i\n", numA);
        // ex: B = A + B
        // ex: 1 = 0 + 1
        // ex: 2 = 1 + 1
        // es: 5  = 3 + 2
        numB = numA + numB;
        printf("%i\n", numB);
    }
    
    
    
}





