// Fibonacci Squence
// n = (n-1) + (n -2)


#include "stdio.h"

// print fibonacci
void fibonacci(void);


int main (void){
    
    fibonacci();
    return 0;
    
}


// function defintion

void fibonacci(void){
    
#define LENGTH 30
    
    int fib[LENGTH];
    fib[0] = 1;
    fib[1] = 1;
    
    
    for(int i = 1; i < LENGTH; i++){
        
        fib[i] = (fib[i - 1]) + (fib[i - 2]);
        printf("%i\n", fib[i]);
        
    }
    
}


