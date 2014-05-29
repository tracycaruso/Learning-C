//  BasicProgram.c
//  Learning-C-Practice
//
//  Variables
//  Chapter 5 - Absolute Beginners Guide to C
//

#include <stdio.h>

int main (void)
{
    // Declare & Initialize Variables
    
    char priceCode = 'J';               // Character Variable (single quotes)
    int quantity = 100;                 // Integer Variable (-32768 to 32767)
    long int wholeSaleQuant = 45000;    // Long Integer Variable (more than 32767 less than -32768)
    float price = 13.54;                // Floating Point Variable (numbers with decimals)
    double yrlySales = 9845543.23;      // Double Variable (extremely large and small floating point data)
    
    
    printf("%c \n%d \n%ld \n%f \n%f \n" , priceCode , quantity , wholeSaleQuant , price , yrlySales );
    
    /*** Output ***/
    // J
    // 100
    // 45000
    // 13.540000
    // 9845543.230000
    
    return 0;
    
    
}
  


/***************************** VOCAB *******************************/

// Variables : a box in your computer's memory that holds a number or a character

// Literal Data : data that doesn't change

// Variable Declaration : tells the program to reserve space for incoming data

// Assignment Operator : assigns values to variables ( = )



/*** Common C Variable Types ***/

// char : character data

// int : integer data between -32768 & 32767

// long int : integer data greater than 32767 and less than -32768

// float : floating point data (data with decimal points)

// double : extremely large and small floating point data

