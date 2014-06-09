//  Learning-C-Practice
//  Statements, Espressions and Operators
//  Chapter 4 - Teach Yourself C in 21 Days
//  Exercise 8



// Compare expressions


#include <stdio.h>

int main (void){
    
    int x = 4, y = 6, z = 2;
    
    if( x == 4){
        printf("x is equal to 4 : this evaluates to true\n");
    }
    else{
        printf("x is not equal to 4  : this evaluates to false\n");
    }
    
    if( x != y - z){
        printf("x is not equal to y - z : this evaluates to true\n");
    }
    else{
        printf("x is equal to y - z: this evaluates to false\n");
    }
    
    if( z == 1){
        printf("z is equal to 1 : this evaluates to true\n");
    }
    else{
        printf("z in not equal to 1 : this evaluates to false\n");
    }
    
    if(y){
        printf("y is not equal to 0 : this evaluates to true\n");
    }
    else{
        printf("y is equal to 0 : this evaluates to false\n");
    }
    
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