// Factorial with a Loop

// !n = n * (n-1) * (n-2)...
// !3 = 3 * 2 * 1 = 6

// !5 = 5 * 4 * 3 * 2 * 1 = 120

#include <stdio.h>

int main (void){
    
    int c, n, fact = 1;
    
    printf("Enter a number to calculate it's factorial: \n");
    scanf("%d", &n);
    
    
    // ex n = 3
    // loop 3 times
    // ex n =5
    // loop 5 times
    for(c = 1; c <= n; c++){
        
        // 1 * 1 | fact = 1;
        // 1 * 2 | fact = 2;
        // 2 * 3 | fact = 6;
        // 6 * 4 | fact = 24;
        // 24 * 5 | fact = 120
        fact = fact * c;
    }
    
    // factorial of 3 is 6
    // factorial of 5 is 120
    
    printf("Factorial of %d = %d\n", n, fact);
    
    
    return 0;
    
    
    
    
}