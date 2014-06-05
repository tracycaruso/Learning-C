//  BasicProgram.c
//  Learning-C-Practice
//
//  Data Structures
//  Chapter 27 - Absolute Beginners Guide to C
//



#include "stdio.h"

// Defining a Structure and telling the structure what attributes or types of data it will hold
// Could Store in a separate file
struct personStruct{
    char firstName[30];
    char lastName[30];
    int age;
    int dateOfBirth;
    float weight;
};


int main (void){
    
    // Define an array of 3 stucture variable
    struct personStruct person[3];
    int i;
    
    for( i = 0 ; i < 3; i++){
        // Store users input to add data to 3 separate structure variable
        printf("What is your first name? : ");
        gets(person[i].firstName);
        
        printf("What is your last name? : ");
        gets(person[i].lastName);
        
        printf("How old are you? : ");
        scanf("%d" , &person[i].age);
        
        printf("What is your year of birth? : ");
        scanf("%d" , &person[i].dateOfBirth);
        
        printf("How much do you weight : ");
        scanf("%f" , &person[i].weight);
        
        // Clears space character
        getchar();
        
    }
    // Lists 3 Stucture Variables and their content
    for( i = 0 ; i < 3; i++){
        printf("Person number %d : " , i + 1);
        printf("First Name : %s \n" , person[i].firstName);
        printf("Last Name : %s \n" , person[i].lastName);
        printf("Age : %d \n" , person[i].age);
        printf("Birth Year : %d \n" , person[i].dateOfBirth);
        printf("Weight : %.2f \n" , person[i].weight);
        
        printf("********* \n");
        
    }
    
    return 0;
}



/***************************** VOCAB *******************************/
// Structure : group of of stored data
// Structure Tag : Name you give to a structres look
// Member Definitions : Built in data type definitions
// Dot Operator : lets you put data in a structure variables individual members