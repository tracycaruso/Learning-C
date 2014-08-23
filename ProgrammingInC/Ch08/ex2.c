//  Learning-C-Practice
//  Functions
//  Chapter 8
//  ex.2
//  Triangle number
#include <stdio.h>

int triangle(int n);


int main(void){
    
    int tri1, tri2, tri3;
    
    tri1 = triangle(10);
    tri2 = triangle(20);
    tri3 = triangle(50);
    
    printf("%i, %i, %i\n", tri1, tri2, tri3);
    
    
    return 0;
}


int triangle(int n){
    
    auto int num = 0;
    
    for (int x = 0; x <= n; x++){
        num += x;
        
    }
    
    
    return num;
    
    
}