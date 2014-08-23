// Triangle
// n + (n - 1) + (n - 2) + (n - 3);
// 5 + 4 + 3 + 2 + 1

#include "stdio.h"

// Get Number
int getNumber(void);

// Triangle number
int getTriangle(int n);

int main (void){
    
    int number, triangle;
    
    number = getNumber();
    triangle = getTriangle(number);
    
    
    printf("The triangle of %i is %i\n", number, triangle);
    
}

// Get number

int getNumber(void){
    
    int n;
    
    printf("Please enter a number : ");
    scanf("%i", &n);
    
    return n;
}


// Triangle
// n + (n - 1) + (n - 2) + (n - 3);
int getTriangle(int n){
    
    int tri = 0;
    
    for(int i = 0; i < n; i++){
        
        tri += n - i;
        
    }
    
    return tri;
}