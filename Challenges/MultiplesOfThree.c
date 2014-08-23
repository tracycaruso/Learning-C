// Multiples of 3
// Each multipe of 3 has digits whose sum is divisible by 3


#include <stdio.h>

void multipleOfThree(int n);

int main(void){
    
    int num;
    
    printf("Please enter a number : ");
    scanf("%i", &num);
    
    multipleOfThree(num);
    
    
}

void multipleOfThree(int n){
    
    int sum;
    
    while(n != 0){
        sum += n % 10;
        n = n / 10;
        
    }
    
    if(sum % 3 == 0){
        
        printf("The number is divisible by three\n");
    }
    
    else{
        printf("The number is not divisible by three\n");
    }
    
    
    
}