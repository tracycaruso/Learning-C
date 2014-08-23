//  Learning-C-Practice
//  Characters & Strings
//  Chapter 10 Review - Teach Yourself C in 21 Days
//  10.7

// Prompts user for 3 valuse and returns them to the screen

#include <stdio.h>
// 2 character arrays
char lname[257], fname[257];
// variables
int count, id_num;

int main(void){
    // Prompt user
    puts("Enter last name, first name, ID number separated");
    puts("by spaces, then press Enter.");
    
    // store the users input
    // because lname and fname are pointers to the first value up until the null characters the address of operator isnt needed
    // however because id_num is a variable it needs the & operator
    // scanf  has a return value, an integer value equaling the number of items successfully inputed
    // in this cas 3 is store in the count variable
    count = scanf("%s%s%d", lname, fname, &id_num);
    
    // This returns the number of items stored in the count variable
    // and the values stored in the other variables and arrays
    printf("%d items entered: %s %s %d \n", count, fname, lname, id_num);
    
    return 0;
}





/***************************** VOCAB *******************************/
// Character : Single Letter, Numeral, Puncutation Mark or other Symbol
// String : andy sequence of charcters
// ASCII character set : 0 - 255 code values that represent letters, digits, punctuation, and other symbols
// Dynamic Allocation : allocate space to a program while the program is executing
// malloc() : memory allocation function