//  BasicProgram.c
//  Learning-C-Practice
//
//  Character Arrays
//  Chapter 6 - Absolute Beginners Guide to C
//

#include <stdio.h>
#include <string.h> /*** Be sure to add the <string.h> header when using string functions ***/

int main (void)
{
    // These character arrays were initalized at the same time they were defined
    // The numbers in the brackets tell the program how much space each element will need for storage
    // This number is calculated by adding 1 for null zero to the amount of characters in each string
    char day1[7] = "Sunday"; //Sunday0 = 7 characters
    char day2[7] = "Monday";
    char day3[8] = "Tuesday";
    char day4[10] = "Wednesday";
    
    // When you don't add a number to the subscript C will automatically calculate the number for you
    char day5[] = "Thursday";
    char day6[] = "Friday";
    char day7[] = "Saturday";
    
    
    // In this case the character array was not initalized when defined
    // When note initalizing a value with a character array always define its length
    // Be sure to make the number large enough to fit the string and the null zero
    // When the string varies in length, add enough room in the character count to account for the largest string
    char myName[6];
    
    
    // Because this character array was not initalized when it was declared, you must use the strcpy function
    // to change its value
    strcpy(myName, "Julie");
    
    
    printf("%s \n%s \n%s \n%s \n%s \n%s \n%s \n%s \n" , day1, day2, day3, day4, day5, day6, day7, myName);
    
    return 0;
    
}



/***************************** VOCAB *******************************/

// Null Zero : placed at the end of strings to terminate the string, affects memory storage but not string length

// String Length : the number of characters in a string up to but not including the null zero

// Array : a list a variables of the same data type

// Element : each individual value in an array

// Subscript : numbers that you specify to target each element in the array    int array[10]

// strcpy() : a function used to a add a character array after it has been defined