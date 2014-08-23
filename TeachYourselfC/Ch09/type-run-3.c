//  Learning-C-Practice
//  Pointers
//  Type and Run 3 - Teach Yourself C in 21 Days



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototype returns void, takes 1 parameter of interger type
void sleep1( int nbr_seconds);

int main( void ){
    // declare variables
    int ctr;
    int wait = 13;
    
    // Print to screen, pass the wait variable
    printf("Delay for %d seconds\n", wait );
    printf(">");
    
    // as long as the counter is less than the wait time loop
    for (ctr = 1; ctr <= wait; ctr++){
        // print to screen each loop
        printf(".");
        // force dot to print on buffered machines
        fflush(stdout);
        // call the sleep function, pass in an integer value of 1
        sleep1( (int) 1);
        
    }
    // When loop is finished print done
    printf("Done!\n");
    return (0);
}

// function definition
void sleep1( int nbr_seconds){
    
    // goal variable ? type clock?
    clock_t goal;
    
    // multiple number of seconds by CLOCKS_PER_SEC (must be a constant from the time.h)
    // then add them to the clock() function ? a function from the time.h ?
    // store value in goal
    goal = (nbr_seconds * CLOCKS_PER_SEC) + clock();
    
    // as long as the goal is larger than the clock, loop
    while ( goal > clock()){
        ;
    }
}






/***************************** VOCAB *******************************/
