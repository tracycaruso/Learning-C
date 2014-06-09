//  Learning-C-Practice
//  Functions
//  Chapter 5 - Teach Yourself C in 21 Days
//  5.4

//  Uses a function to compare to values


#include <stdio.h>

// variable declaration
int x, y, z;


// function prototype
int larger_of(int a, int b);

int main ( void ){
    
    // prompts user for 2 integers, stores the results in x & y
    puts("Enter two different integer values : ");
    scanf("%d%d", &x, &y);
    
    // us the agruments x & y to call the larger_of function and store result in the z varialbe
    z = larger_of(x,y);
    
    // print z
    printf("\nThe larger value is %d. ", z);
    
    return 0;
}

// function header, takes 2 parameters of the integer value type, returns an integer
int larger_of(int a, int b){
    
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}



/***************************** VOCAB *******************************/

// Function : independed section of code that performs a specific task
// Function Header : first line of the function definition
// Structured Programming : individual program tasks are performed by independed sections of code
// Argument : values passed to a function
// Parameter : entry in a function header, place holder for an argument
// Function Body : statements enclosed in braces that immediately follows the function header
// Local Variable : can only be used within the function it is enclosed in