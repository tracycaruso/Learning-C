//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 8
//  ex 4
//  Nested For Loops

#include <stdio.h>

int calculateTriangle(int num);

int main(void){
    
    int i, number, triangle;
    
    
    for( i = 1; i < 5; i++){
        triangle = 0;
        printf("What number would you like to test? : ");
        scanf("%i", &number);
        
        number = calculateTriangle(number);
        
        
        printf("The triangle of %i is %i\n", number, triangle);
        
    }
    
    
    
    
    
    
    return 0;
}


int calculateTriangle(int num){
    int triangle;
    
    for(int a = 1; a <= num; a++){
        triangle += a ;
    }
    
    return triangle;
    
    
    
}