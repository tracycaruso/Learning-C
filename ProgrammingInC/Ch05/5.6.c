//  Learning-C-Practice
//  Variables, Data Types and Arithmetic Expressions
//  Chapter 5
//  5.6
//  While Statement

#include <stdio.h>

int main(void){
    
    int count = 1;
    
    while(count <= 5){
        printf("%i\n", count);
        ++count;
    }
    
    return 0;
}