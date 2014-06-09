//  Learning-C-Practice
//  Statements, Espressions and Operators
//  Chapter 4 - Teach Yourself C in 21 Days
//  Exercise 7



// Operator Precedence


#include <stdio.h>

int main (void){
    int x;
    
    // 1 + 2 * 3
    // 1 + 6
    // 7
    printf("1 + 2 * 3 = %d\n", 1 + 2 * 3);
    
    // 10 % 3 * 3 - (1 + 2)
    // 10 % 3 * 3 - 3
    // 1 * 3 - 3
    // 3 - 3
    //0
    printf("10 remainder 3 * 3 - (1 + 2) = %d\n", 10 % 3 * 3 - (1 + 2));
    
    //((1 + 2) * 3)
    // 3 * 3
    //9
    printf("((1 + 2) * 3) = %d\n" , ((1 + 2) * 3));
    
    // (5 == 5)
    // 1
    printf("5 == 5 = %d\n" , 5 == 5);
    
    // (x = 5)
    // 5
    printf ("(x = 5) = %d" , x = 5);
    
    
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