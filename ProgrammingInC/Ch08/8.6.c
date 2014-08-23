//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.6
//  Greatest Common Divisor



#include <stdio.h>

int gcd(int a, int b);

int main(void){
    
    int result, x = 63, y = 42;
    
    result = gcd(x, y);
    
    printf("%i\n", result);
    
    
    return 0;
    
    
}

int gcd(int a, int b){
    
    int temp;
    
    while(b != 0){
        
        // remainder = dividend % divisor
        temp = a % b;
        
        // dividend = divisor
        a = b;
        // divisor = remainder
        b = temp;
        
    }
    
    return a;
    
    
    
}