//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.5a
//  Greatest Common Divisor
//  the book answer


#include <stdio.h>

void gcd(int u, int v){
    int temp;
    
    printf("The gcd of %i and % is ", u, v);
    
    while( v != 0){
        temp = u % v;
        u = v;
        v = temp;
    }
    
    printf("%i\n", u);
}

int main(void){
    gcd(150, 35);
    gcd(1026, 405);
    gcd(83, 240);
    
    return 0;
}
