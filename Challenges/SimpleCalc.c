//  Simple Calculator
#include "stdio.h"
#include "string.h"


int main (void){
    
    // equation variables
    
    float a, b, answer;
    char syb;
    
    // scan for equation
    
    printf("Please enter a simple math equation (ie 5 * 9) : ");
    scanf("%f %c %f", &a, &syb, &b);
    
    // check symbol
    if(syb == '+'){
        answer = a + b;
        
    }
    else if( syb == '-'){
        answer = a - b;
    }
    else if(syb == '*'){
        answer = a * b;
    }
    else if(syb == '/'){
        if(b == 0){
            printf("Not a number\n");
        }
        else{
            answer = a / b;
        }
    }
    else{
        printf("Sorry Cannot Compute\n");
    }
    
    
    printf("%.2f %c %.2f = %.2f\n", a, syb, b, answer);
    
    return 0;
    
    
    
    
    
}


