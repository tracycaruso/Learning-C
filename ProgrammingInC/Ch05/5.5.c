//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 5
//  5.5
//  Nested For Loops

#include <stdio.h>

int main(void){
    
    int i, number, triangle, a;
    
    
    for( i = 1; i < 5; i++){
        triangle = 0;
        printf("What number would you like to test? : ");
        scanf("%i", &number);
        
        for(a = 1; a <= number; a++){
            triangle += a ;
        }
        
        printf("The triangle of %i is %i\n", number, triangle);
        
    }
    
    
    
    
    
    
    return 0;
}