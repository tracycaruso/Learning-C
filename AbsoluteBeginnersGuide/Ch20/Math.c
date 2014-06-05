/***************************** VOCAB *******************************/

//  BasicProgram.c
//  Learning-C-Practice
//
//  Math

//  Chapter 20 - Absolute Beginners Guide to C
//




#include "stdio.h"
#include "math.h"


int main (void){
    
    float numPow, numSqr, numRandom;
    int numFloor, numCeil, numAbs;
    
    
    numPow = pow (2.0, 2.0);
    printf("2 raised to the 2nd power is %.0f\n", numPow);
    
    numSqr = sqrt(49);
    printf("The square root of 49 is %.0f\n", numSqr);
    
    numRandom = rand();
    printf("A random number from 1 to 32767 is %f\n", numRandom);
    
    numFloor = floor(4.22223);
    printf("The floor of 4.22223 is %d\n" , numFloor);
    
    numCeil = ceil(4.22223);
    printf("The ceil of 4.22223 is %d\n" , numCeil);
    
    numAbs = fabs(-9999);
    printf("The absolute value of -9999 is %d\n" , numAbs);
    
    
    
}



/***************************** VOCAB *******************************/

// floor() : rounds down to the nearest integer
// ceil() : rounds up to the nearest integer
// fabs() : finds the absolute value of a number
// pow() : raises number to a power
// sqrt() : finds the square route of a number
// rand() : displays a random number / the same random number each time the program is run
// srand() : displays a random number / a different random number each time the program is run / used with the time.h

