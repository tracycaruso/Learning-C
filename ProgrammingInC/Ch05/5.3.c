//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 5
//  5.3
//  Calculate a Triangular Number Table

#include <stdio.h>

int main (void){
    
    int a, b, c, triangle = 0;
    
    for( b = 1; b < 10; b++){
        for( a = 1; a <= b; a++ ){
            
            printf("=========================\n");
            printf("Before : %2i = %2i + %2i\n" , triangle , triangle , a);
            triangle = triangle + a;
            printf("After  : %2i = %2i + %2i\n" , triangle , triangle , a);
            
        }
        printf("*****\n");
        printf("Final  : %2d : %2d\n" ,b, triangle);
        printf("*****\n");
        triangle = 0;
        
    }
    
    
    return 0;
    
    
}