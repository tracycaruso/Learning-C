// Greatest Common Divisor

int getNumbers(void);
int greatestFactor(int n1, int n2);


#include "stdio.h"


// function prototype


int main (void){
    
    int number1, number2, gcf;
    
    // Collect 2 numbers
    number1 = getNumbers();
    number2 = getNumbers();
    
    // Store the greatest common factor of 2 numbers
    gcf = greatestFactor(number1, number2);
    
    // return gcf
    
    printf("The GCF of %i and %i is %i\n", number1, number2, gcf);
    
}

// Get number from user

int getNumbers(void){
    
    int n1;
    
    printf("Please enter a number : ");
    scanf("%i", &n1);
    
    return n1;
    
}


// Find the greatest common divisor

int greatestFactor(int n1, int n2){
    int temp, r;
    
    // n1 must be the larger of the 2 numbers
    if(n2 > n1){
        temp = n2;
        n2 = n1;
        n1 = temp;
    }
    
    
    // remainder = dividend % divisor
    // dividend = divisor
    // divisor = remainder
    // repeat until remainder == 0
    while( n2 != 0 ){
        r = n1 % n2;
        n1 = n2;
        n2 = r;
    }
    
    return n1;
    
}




