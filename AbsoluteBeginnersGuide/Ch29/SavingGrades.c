//  BasicProgram.c
//  Learning-C-Practice
//  Editing Files
//  Chapter 29 - Absolute Beginners Guide to C
//



#include "stdio.h"
#include "stdlib.h"

// create a structure to hold students ids and grades
struct std{
    char id[4]; // holds 3 characters and null zero
    float avg;
};

// create file pointer
FILE *grades;

int main (void){
    
    // declare a student variable using the std structure
    struct std students;
    
    // create file called grades and make it writable
    grades = fopen("/Users/LapTop/Git/Learning-C/AbsoluteBeginnersGuide/Ch29/grades.dat", "w+");
    
    // if the file is not created send error to screen
    if(grades == 0){
        printf("Error...\n");
        exit(1);
    }
    
    do{
        // collect data from user
        printf("(Enter Q to quit entering students)");
        printf("What is the next student's 3 character ID?\n : ");
        
        
        // store data in the student variables id member definition
        gets(students.id);
        
        
        if(students.id[0] != 'Q')
        {
            // store students average in the current variables avg member definition
            printf("What is the students average? : ");
            scanf("%f", &students.avg);
            
            // remove return character
            getchar();
            
            // print current student id and grade to file (fprintf prints to file not screen)
            fprintf(grades, "%s : %.1f\n", students.id, students.avg);
            
        }
        
    } while(students.id[0] != 'Q');
    
    
    // Closes File
    fclose(grades);
    
    return 0;
    
    
    
    
}



