//  Learning-C-Practice
//  Statements, Espressions and Operators
//  Chapter 4 - Teach Yourself C in 21 Days
//  Exercise 8



// Check to see if some one is between the ages 21 and 65


#include <stdio.h>

#define SENIOR 65
#define ADULT 21

int main (void){
    
    
    
    int age;
    
    printf("How old are you? : ");
    scanf("%d", &age);
    
    if(age >= SENIOR){
        printf("You are a senior\n");
    }
    else if( age < ADULT){
        printf("Your are not an adult\n");
    }
    else{
        printf("You are a legal adult\n");
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