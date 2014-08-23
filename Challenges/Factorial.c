// Factorial
// n! = n * (n-1) * (n-2) * (n-3)...
// 5! = 5 * 4 * 3 * 2 * 1;


#include "stdio.h"

long getNumber(void);
long getfactorial(long n);


int main (void){
    
    long number, factorial;
    
    number = getNumber();
    factorial = getfactorial(number);
    
    printf("The factorial of %ld is %ld\n", number, factorial);
    
    
}


// get number from user
long getNumber(void){
    long n;
    
    printf("Please enter a number : ");
    scanf("%ld", &n);
    
    
    return n;
}



// find the factorial of a number
long getfactorial(long n){
    
    long fact = 1;
    
    for(long i = 0; i < n; i++){
        fact *= n - i;
    }
    
    return fact;
    
    
}