//  Learning-C-Practice
//  Reading & Writing
//  Chapter 7 - Teach Yourself C in 21 Days
//  7.2
//

//  Escape Squences


#include <stdio.h>

int a = 2, b = 10, c = 50;
float f = 1.05, g = 25.5, h = -0.1;

int main (void){
    
    printf("\nDecimal values without tabs: %d %d %d", a, b, c);
    printf("\nDecimal values with tabs: \t%d \t%d \t%d" , a, b, c);
    
    printf("\nThree floats on 1 line : \t%f\t%f\t%f", f, g, h);
    printf("\nThree floats on 3 lines : \n\t%f\n\t%f\n\t%f" , f, g, h);
    
    printf("\nThe rate is %f%%", f);
    printf("\nThe result of %f/%f = %f\n", g, f, g / f);
    
    return 0;
}

/***************************** VOCAB *******************************/
// Format String : the first argument in functions like printf(), they instruct the other arguments on what to do
// Newline Character : \n  creates a newline
// Escape Sequence : formatting control \n \t ...
// Conversion Specifier (Conversion Character) : tells functions how to interpret variables
