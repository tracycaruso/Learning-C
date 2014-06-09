//  Learning-C-Practice
//  Statements, Espressions and Operators
//  Chapter 4 - Teach Yourself C in 21 Days
//  Exercise 3



// Uses the pre and postfix increment operators to increase the value of a number


#include <stdio.h>


int a, b;

int main(void){
    a = b = 5;
    
    // The postfix operator will increase the variable after the expression has executed
    // The prefix operator will increase the variable before the expression has been executed
    printf("\nPost    Pre");
    printf("\n%d      %d", a++, ++b);
    printf("\n%d      %d", a++, ++b);
    printf("\n%d      %d", a++, ++b);
    printf("\n%d      %d", a++, ++b);
    printf("\n%d      %d\n", a++, ++b);
    
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
// Logical Operators : ||, &&, !
// Compound Assignment Operators : shorthand method for combining binary opererations and assignment operations ex: x += 5
// Ternary Operator : takes 3 operands
// Conditional Operator : C's only ternary operator, shorthand if statement ex z = (x > y) ? x : y;