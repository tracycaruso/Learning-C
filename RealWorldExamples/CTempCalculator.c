/**********************************************************************/
//  Converts Fahrenheit to Celsius and Celsius to Fahrenheit
//  Celsius to Fahrenheit : C = (F - 32) / 1.8
//  Fahrenheit to Celsius : (F * 9) / 5 + 32
/**********************************************************************/

#include <stdio.h>

// Function Prototypes
void tempType (void);
void tempCF();
void tempFC();


int main (void){
    
    // Calls function to find out which type of conversion user wants to make
    tempType();
    return 0;
    
}

/**********************************************************************/
// Function : tempType
// Purpose  : Find out which type of conversion the user wants to make
//            Make sure response is valid
//            Call function dependent on coversion type
// Returns  : nothing
/**********************************************************************/

void tempType (void){
    
    // Local Variables
    char type;
    _Bool answer = 1;
    
    // Check to see which conversion user would like to make
    do{
        printf("What temperature would you like to convert?\n");
        printf("Select C to convert Celsius to Fahrenheit.\n");
        printf("Select F to convert Fahrenheit to Celsius.\n: ");
        scanf("%c" , &type);
        
        if(toupper(type) == 'C'){
            tempCF();
        }
        else if(toupper(type) == 'F'){
            tempFC();
        }
        else{
            answer = 0;
        }
        
    } while (answer == 0);
}

/**********************************************************************/
// Function : tempCF
// Purpose  : Converts Celsius to Fahrenheit
//            Prints Result to Console
//
// Returns  : nothing
/**********************************************************************/

void tempCF(){
    float c, answer;
    
    printf("Please type the temperature in Celsius : ");
    scanf("%f" , &c);
    
    answer = (c * 9) /5 + 32;
    printf("%.1f\u00B0 to Fahrenheit is : %.0f\u00B0\n" , c , answer);
    
}

/**********************************************************************/
// Function : tempFC
// Purpose  : Converts Fahrenheit to Celsius
//            Prints Result to Console
//
// Returns  : nothing
/**********************************************************************/

void tempFC(){
    float f, answer;
    
    printf("Please type the temperature in Fahrenheit : ");
    scanf("%f" , &f);
    
    answer  = (f - 32) / 1.8;
    printf("%.0f\u00B0 to Celsius is : %.1f\u00B0\n" , f , answer);
}

