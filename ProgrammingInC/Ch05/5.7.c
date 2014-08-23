//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 5
//  5.7
//  Greatest Common Divisor

#include <stdio.h>

int main(void){
    
    int u, v, temp;
    
    printf("Please type in two nonnegative integers.\n");
    scanf("%i%i", &u, &v);
    //Ex : 105, 8
    
    
    while ( v != 0){
        //temp = 105 % 8 = 1
        //temp = 8 % 1 = 0
        temp = u % v;
        // u = 8
        // u = 1
        u = v;
        // v = 1
        // v = 0
        v = temp;
        
    }
    
    // u = 1
    printf("Their greatest common divisor is %i\n", u);
    
    
    
    
    
    return 0;
}