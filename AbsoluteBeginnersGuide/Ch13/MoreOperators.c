//  BasicProgram.c
//  Learning-C-Practice
//
//  More Operators
//
//  Chapter 13 - Absolute Beginners Guide to C
//


#include <stdio.h>

int main (void)
{
    int age;
    float ticketPrice;
    
    printf("How old are you? ");
    scanf(" %d" , &age);
    
    // Uses the Conditional Operator to check users age
    // If user is 12 years old or younger the price is 5.00 else it is 12.00
    // The value is then stored in ticket price
    ticketPrice = (age <= 12) ? 5.00 : 12.00;
    printf("Your ticket costs $%.2f. \n" , ticketPrice);
    
    // This is an example of at postfix operator
    // The age value will not be incremented until after the first statement is executed
    printf("Next year you will be %d. \n" , age++);
    printf("Postfix Increment : %d\n" , age);
    
    // This is an example of a postfix operator
    // The age value is incremented before the statement is executed
    printf("Next year you will be %d. \n" , ++age);
    printf("Prefix Increment : %d\n" , age);
    

    
    return 0;
    
}



/***************************** VOCAB *******************************/

// Conditional Operator : Requires 3 arguments, takes the place of an if, else statement -  ?:

// Increment : Requires only 1 argument, adds 1 to a variable ++

// Decrement : Requires only 1 argument, subtracts 1 from a variable --

// Prefix Increment or Prefix Decrement : the operator is on the left side of the agrument | increments or decrements
// before the statment is executed

// Postfix Increment or Postfix Decrement : the operator is on the right side of the agrument | increments or decrements
// after the statment is executed