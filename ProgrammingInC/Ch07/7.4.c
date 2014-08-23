//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  7.4
//  Prime numbers

#include <stdio.h>
// When using boolean add this header
#include <stdbool.h>

int main (void){
    
    int p, i, primes[50], primeIndex = 2;
    bool isPrime;
    
    primes[0] = 2;
    primes[1] = 3;
    
    for (p = 5; p <= 50; p = p + 2){
        // 7 <= 50
        isPrime = true;
        
        // if True and 5/3 >= 3 ?  False -- Move to next statement
        // if True and 7/5 >= 5 ?  False -- Move to next statement
        for(i = 1; isPrime && p / primes[i] >= primes[i]; ++i){
            if(p % primes[i] == 0)
                isPrime = false;
        }
        
        // if isPrime is True
        // if isPrime is True
        if( isPrime == true ){
            // primes[2] = 5;
            // primes[3] = 7;
            primes[primeIndex] = p;
            // prime index ++ = 3
            // prime index ++ = 4;
            ++primeIndex;
        }
    }
    
    // Print all prime numbers
    for ( i = 0; i < primeIndex; i++){
        printf("%i ", primes[i]);
    }
    
    printf("\n");
    return 0;
}