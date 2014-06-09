//  Learning-C-Practice
//  Functions
//  Chapter 5 - Teach Yourself C in 21 Days
//  Exercise 11
//

// 3 To the power of... Recursive Functions

#include <stdio.h>

int a = 5, answer;
int power(int x);

int main (void){
    
    answer = power(a);
    
    printf("%d", answer);
}

int power(int x){
    int answer;
    
    if(x == 0){
        return 1;
    }
    else{
        
        answer =  3 * power(x - 1);
        
    }
    
    return answer;
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