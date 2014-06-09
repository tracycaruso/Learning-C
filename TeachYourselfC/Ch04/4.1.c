//  Learning-C-Practice
//  Statements, Espressions and Operators
//  Chapter 4 - Teach Yourself C in 21 Days
//  4.1

// Uses the pre and postfix decrement operators to decrease the value of a number


#include <stdio.h>


int a, b;

int main(void){
    a = b = 5;
    
    // The postfix operator will decrease the variable after the expression has executed
    // The prefix operator will decrease the variable before the expression has been executed
    printf("\nPost    Pre");
    printf("\n%d      %d", a--, --b);
    printf("\n%d      %d", a--, --b);
    printf("\n%d      %d", a--, --b);
    printf("\n%d      %d", a--, --b);
    printf("\n%d      %d\n", a--, --b);
    
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
