//  BasicProgram.c
//  Learning-C-Practice
//
//  Using the library function printf() to showcase data types and conversion characters
//  Chapter 2 - Absolute Beginners Guide to C
//

#include <stdio.h>

int main (void)
{
    // The conversion character for character data is %c
    // Characters in C always use apostrophes also know as single quotation marks
    // Statement prints "A letter grade of B"
    printf("A letter grade of %c\n", 'B');
    
    
    // The coversion character for integer data is %d or %i
    // Statement prints  "A test schore of 87"
    printf("A test score of %d\n", 87);
    
    
    // The conversion character for floating data is %f
    // The .1 before the f tells the program how many decimal points to show (the default is 6)
    // Statement prints "A class average of 85.9"
    printf("A class average of %.1f\n", 85.9);
    
    
    return 0;
}
