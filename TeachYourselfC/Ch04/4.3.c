//  Learning-C-Practice
//  Statements, Espressions and Operators
//  Chapter 4 - Teach Yourself C in 21 Days
//  4.3


// Compares the values of to variables

#include <stdio.h>

int x, y;

int main( void )
{
    printf("Input an integer value for x: ");
    scanf("%d", &x);
    
    printf("\nInput an integer value for y: ");
    scanf("%d", &y);
    
    if( x == y )
        printf("x is equal to y\n");
    
    if ( x > y )
        printf("x is greater than y\n");
    
    if( x < y )
        printf("x is smaller than y\n");
    
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
// Operator Precedence : order in which operations are performed
// Relational Operators : compare expressions
// Program Control Statements : modifies the order of statement execution
