//  Learning-C-Practice
//  Statements, Espressions and Operators
//  Chapter 4 - Teach Yourself C in 21 Days
//  4.2




#include <stdio.h>

// Defines constants
#define SECS_PER_MIN 60
#define MINS_PER_HOUR 60
#define SECS_PER_HOUR 3600

// declare varibles
unsigned int seconds, minutes, hours, secs_left, mins_left;

int main(void){
    
    // prompts user for number of seconds and stores in the seconds variable
    
    printf("Enter number of seconds(<65000): ");
    // EX : 8000 */
    scanf("%d", &seconds);
    
    // converts seconds to hours and discards remainder - stores result in hours variable
    // EX : 8000 / 360 =  2.222 : hours = 2
    hours = seconds / SECS_PER_HOUR;
    
    // converts seconds to minutes - stores value in minutes variable
    // EX : 8000 / 60 = 133.333 : minutes = 133
    minutes = seconds / SECS_PER_MIN;
    
    // takes total minutes and divides by 60 - Stores remainder in minute variable
    // EX : 133 % 60 = 13.3 : mins_left = 13
    mins_left = minutes % MINS_PER_HOUR;
    
    // takes total seconds and divides by 60 - Stores remainder in the minute variable
    // EX : 8000 % 60 = 19.8 : secs_left = 20
    secs_left = seconds % SECS_PER_MIN;
    
    printf("%u seconds is equal to ", seconds);
    printf("%u h, %u m, and %u s\n", hours, mins_left, secs_left);
    // EX : 8000 seconds is equal to 2 h, 13 m, and 20 s
    
    return 0;
    
}



/***************************** VOCAB *******************************/

// Statement : directs the computer to carry out a task
// White Space : empty space added to code to make it more readable
// Null Statement : statement that doesn't perform any action
// Compound Statement (block): 2 or more C statements enclosed in curly braces
// Expression : anything that evaluates to a numeric value
// Complex Expression : simpler expressions connected by operators
// Operator : symbol that instructs C to perform an operation
// Operand : something an operator acts upon
// Assignment Operator : assigns a value to a variable
// Unary Operator : takes only one operand, ++, --
// Binary Operator : takes two operands, +, -, *, /, %
