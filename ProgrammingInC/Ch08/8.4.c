//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.4
//  Triangle number
#include <stdio.h>

int triangle(int n);


int main(void){
    
    triangle(10);
    triangle(20);
    triangle(50);
    
    return 0;
}


int triangle(int n){
    
    auto int num = 0;
    
    for (int x = 0; x <= n; x++){
        num += x;
        
    }
    
    
    return printf("%i\n", num);
    
    
}




