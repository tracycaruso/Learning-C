//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.16
//  Recursive Factorial
// 5! = 5 x 4 x 3 x 2 x 1


#include <stdio.h>

int main(void){
    unsigned int j;
    unsigned long int factorial(unsigned int n);
    
    for(j = 0; j < 11; j++){
        printf("%2u! = %lu\n", j, factorial(j));
    }
    
    return 0;
}


unsigned long int factorial(unsigned int n)
{
    unsigned long int result;
    
    if ( n == 0){
        result = 1;
    }
    else{
        result = n * factorial (n - 1);
    }
    
    return result;
    
}
