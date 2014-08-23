//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.5
//  Greatest Common Divisor
//  dividend = divisor * quotient + remainder

//  dividend = the largest of the numbers
//  divisor = the smallest of the numbers
//  quotient = dividend / divisor
//  remaind = dividend % divisor

//  63 = 42 * 1 + 21
//  each iteration replace the dividend with the divisor
//  and the divisor with the remainder
//  until the remainder == 0;


#include <stdio.h>

int isNegative(int n);
int greatestDivisor(int dividend, int divisor);

int main(void){
    
    int a, b, gcd;
    
    // Prompt user for numbers
    printf("Please enter your first number : ");
    scanf("%i", &a);
    
    printf("Please enter your second number : ");
    scanf("%i", &b);
    
    // Convert any negative numbers to positive
    isNegative(a);
    isNegative(b);
    
    if(a > b){
        gcd = greatestDivisor(a,b);
    }
    else{
        gcd =  greatestDivisor(b,a);
    }
    
    
    printf("The greatest common divisor of %i and %i is %i\n", a, b, gcd);
    
    return 0;
    
}

// Check to see in number is negative, returns positive
int isNegative(int n){
    
    if(n < 0){
        n *= -1;
    }
    
    return n;
    
}


// Get the GCD of 2 numbers

int greatestDivisor(int dividend, int divisor){
    
    int remainder = 1;
    int gcd;
    
    while(remainder != 0){
        
        // ex 63 % 42 = 21
        // remainder = 21
        // dividend = 42
        // divisor = 21
        // 42 % 21 = 0
        // remainder = 0;
        // There for the greatest common divisor is 21;
        remainder = dividend % divisor;
        
        dividend = divisor;
        divisor = remainder;
        
    }
    
    gcd = dividend;
    
    return gcd;
}
