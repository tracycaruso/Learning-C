// GCF


#include "stdio.h"
#include "stdbool.h"


int main (void){
    
    //variables
    int a, b, result;
    
    //prototypes
    int gcf(int dividend, int divisor);
    bool isGreater(int num1, int num2);
    
    
    printf("Please enter a number : ");
    scanf("%i", &a);
    
    printf("Please enter a second number : ");
    scanf("%i", &b);
    
    result = isGreater(a, b) ? gcf(a, b) : gcf(b, a);
    
    printf("The GCF of %i and %i is %i.\n", a , b, result);
    
    return 0;
    
    
    
}

bool isGreater(int num1, int num2){
    
    bool greatest;
    
    if(num1 > num2){
        greatest = true;
    }
    else{
        greatest = false;
    }
    
    return greatest;
}



int gcf(int dividend, int divisor){
    int remainder;
    
    while(divisor != 0){
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    
    return dividend;
    
    
}