//  Learning-C-Practice
//  Basic Program Control
//  Chapter 6 - Teach Yourself C in 21 Days
//
//  6.4

//  While Loop - Counts from 1 - 20

#include <stdio.h>

int array[5];

int main (void){
    int ctr = 0;
    int nbr = 0;
    
    printf("This program prompts you to enter 5 numbers\n");
    printf("Each number should be from 1 to 10\n");
    
    // Repeats 5 times
    while( ctr < 5){
        // Resents nbr to 0
        nbr = 0;
        // as long as nbr is not in between 1 and 5
        while(nbr < 1 || nbr > 10){
            // prompt user for number
            printf("\nEnter number %d of 5: ", ctr + 1);
            // store user number in nbr
            scanf("%d", &nbr);
        }
        // move to next array element and store value of nbr in that subscript
        array[ctr] = nbr;
        
        // increment the counter
        ctr++;
    }
    
    // list all the numbers
    for(ctr = 0; ctr < 5; ctr++){
        printf("Value %d is %d\n", ctr + 1, array[ctr]);
    }
    
    return 0;
    
}




/***************************** VOCAB *******************************/
// Array : indexed group od data storage locations that have the same name
// Subscript(index) : used to differentiate the different elements in an array

