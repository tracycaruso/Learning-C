//  Learning-C-Practice
//  Functions
//  Chapter 5 - Teach Yourself C in 21 Days
//  Exercise 9
//

// Function that calls 2 other functions

#include <stdio.h>

int a = 10, b = 2, answer;

int numProduct(int x, int y);
int numQuo(int x, int y);
void twoFunct(int x, int y);

int main (void){
    
    twoFunct(a, b);
    
}



void twoFunct(int x1, int y1){
    
    int answer1, answer2;
    
    answer1 = numQuo(x1, y1);
    printf("The Quotient of %d and %d is %d\n", x1, y1, answer1);
    
    answer2 = numProduct(x1, y1);
    printf("The Product of %d and %d is %d\n", x1, y1, answer2);
    
}


int numQuo(int x2, int y2){
    x2 = (y2)? (x2 /= y2) : x2;
    return x2;
}

int numProduct(int x3, int y3){
    return x3 *= y3;
}



/***************************** VOCAB *******************************/

// Function : independed section of code that performs a specific task
// Function Header : first line of the function definition
// Structured Programming : individual program tasks are performed by independed sections of code
// Argument : values passed to a function
// Parameter : entry in a function header, place holder for an argument
// Function Body : statements enclosed in braces that immediately follows the function header
// Local Variable : can only be used within the function it is enclosed in
// Recursion : when a function calls itself
// Indirect Recursion : when one function calls another function that then calls the first function
// Inline Function : small functions that call themselves