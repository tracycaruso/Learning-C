//  Learning-C-Practice
//  Statements, Espressions and Operators
//  Chapter 4 - Teach Yourself C in 21 Days
//  4.5


// Compares values using relational operators

#include <stdio.h>

int a;

int main( void )
{
    a = (5 == 5); // evaluates to true & 1
    printf("\na = (5 == 5)\na = %d", a);
    
    a = (5 != 5); // evaluates to false & 0
    printf("\na = (5 != 5)\na = %d", a);
    
    a = (12 == 12) + (5 != 1); // evaluates to 1 + 1 = 2
    printf("\na = (12 == 12) + (5 !=1)\na = %d\n", a);
    
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
