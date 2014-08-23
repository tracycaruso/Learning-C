//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 5
//  5.2
//  Calculate a Triangular Number

#include <stdio.h>

int main (void){
    
    int triangle, i, x;
    
    printf("What number would you like to calculate? : ");
    scanf("%i" , &triangle);
    
    x = triangle;
    
    for(i = 0; i < x; i++){
        triangle += i;
        printf("%d \n" , triangle);
    }
    
    printf("The number is : %d \n" , triangle);
    
}