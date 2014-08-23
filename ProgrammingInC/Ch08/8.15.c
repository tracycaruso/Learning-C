//  Learning-C-Practice
//  Functions
//  Chapter 8
//  8.15
//  Converting a Positive Integer to Another Base


#include <stdio.h>

void auto_static(void){
    // will be the same each time the function is called
    int autoVar = 1;
    
    // will be modfied each time function is called
    static int staticVar = 1;
    
    printf("automatic = %i, static = %i\n", autoVar, staticVar);
    
    ++autoVar;
    ++staticVar;
}


int main(void){
    
    int i;
    void auto_static(void);
    
    for(i = 0; i < 5; i++){
        auto_static();
    }
    
    return 0;
}