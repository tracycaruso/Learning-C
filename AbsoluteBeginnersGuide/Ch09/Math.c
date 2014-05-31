//  BasicProgram.c
//  Learning-C-Practice
//
//  Math with C
//
//  Chapter 9 - Absolute Beginners Guide to C
//


#include <stdio.h>

int main (void)
{
    
    // Declare variables
    float tot, cst, numBght, tax, grdTot, dsct;
    
    // Prompt user for cost and store floating point in cst variable
    printf("What was the cost of your product? ");
    scanf("%f" , &cst);
    
    // Prompt user for number bought and store floating point in numBght variable
    printf("How many items did you buy? ");
    scanf("%f" , &numBght);
    
    // Multiply the cost of the product by the number bought and store in tot variable
    tot = cst * numBght;
    
    // Multiply total cost by .07 and store in tax variable
    tax = .07 * tot;
    
    // Add the tax and total together and store in grdTot variable
    grdTot = tot + tax;
    
    // Multiply the grand total by .10 and subtract from the grand total price, store in dsct variable
    dsct = grdTot - .10 * grdTot;
    
    // Print total cost before discount
    printf("Your grand total is %.2f \n" , grdTot);
    
    // Print total cost with discount
    printf("With your coupon that comes to %.2f \n" , dsct);
    
    
}



/***************************** VOCAB *******************************/

// Espresssion : something that evaluates to a number

// Integer Division Result : will always return a whole number

// Modulus Operater : % Returns the remainder of interger division

// Order of Operators (Precedence): the order in which C evaluates an expression



