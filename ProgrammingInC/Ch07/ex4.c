//  Learning-C-Practice
//  Working with Arrays
//  Chapter 7
//  ex 4
//  Average floating points


#include <stdio.h>

int main (void){
    
    float grade, sum = 0.0, x = 0.0;
    
    
    
    printf("Enter 999 when finished\n");
    
    for(int i = 0; i < 100; i++){
        printf("Print grade #%i : ", i+1);
        scanf("%f", &grade);
        
        if(grade == 999){
            break;
        }
        
        else{
            sum += grade;
            x++;
        }
        
    }
    
    printf("The class average is : %.2f\n", sum/x);
    
    
    
    
    return 0;
}