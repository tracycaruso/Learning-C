// Factorial with a Loop

// !n = n * (n-1) * (n-2)...
// !3 = 3 * 2 * 1 = 6

// !5 = 5 * 4 * 3 * 2 * 1 = 120

#include <stdio.h>

int main (void){
    
    int c, n, fact = 1;
    
    printf("Enter a number to calculate it's factorial: \n");
    scanf("%d", &n);
    
    c = n;
    for(; c > 0; c--){
        
        fact *= c;
        
    }
    
    
    
    printf("Factorial of %d = %d\n", n, fact);
    
    
    return 0;
    
    
    
    
}