//  Learning-C-Practice
//  Character Strings
//  Chapter 10.9
//  Dictionary Look up

#include "stdio.h"
#include "stdbool.h"

// make a structure to hold dictionary words and definitions
struct entry1
{
    char word[15];
    char definition[50];
};


int main (void){
    
    // create a structure called dictionary out of the struct entry
    // fill structure with array of words & defintions
    const struct entry1 dictionary[100] = {
        {"aardvark", "a burrowing African mammal" }, // dictionary[0].word, dictionary[0].definition
        {"abyss", "a bottomless pit" }, // dictionary[1].word, dictionary[1].definition
        {"acumen", "mentally sharp" }, // dictionary[2].word, dictionary[2].definition
        {"addle", "to become confused" }, // dictionary[3].word, dictionary[3].definition
        {"aerie", "a high nest" }, // dictionary[4].word, dictionary[4].definition
        {"affix", "to append" }, // dictionary[5].word, dictionary[5].definition
        {"agar", "a jelly made from seaweed" }, // dictionary[6].word, dictionary[6].definition
    };
    
    
    char wordInput[15]; // array to hold users word
    int entries = 10; // number of current entries
    int entry; // variable to hold entry number
    int lookup(const struct entry1 dictionaryx[], const char search[], const int entries); // function prototype
    
    printf("Enter word: "); // collect word from user
    scanf("%14s", wordInput); // store first 14 chars of word in wordInput
    entry = lookup(dictionary, wordInput, entries); // Search the dictionary for word, return subscript of found entry or -1 if not found
    
    if(entry != -1) // if the not found subscript is not returned
        // print the definition member of the subscript returned
        // ei dictionary[1].definition : a bottomless pit
        printf("%s\n", dictionary[entry].definition);
    // else word was not found
    else
        printf("Sorry\n");
    
    return 0;
    
}


// Function to check string equality
bool equalStrings(const char s1[], const char s2[]){
    
    int i = 0;
    bool areEqual = false;
    
    // while both strings match and neither equals null zero
    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        i++;
    }
    // and if both equal null zero at the same time
    if(s1[i] == '\0' && s2[i] == '\0'){
        // strings are equal
        areEqual = true;
    }
    // otherwise they are not
    else{
        areEqual = false;
    }
    
    return areEqual;
}

// function to look up a word
// takes the entry struct and looks up an instance of that struct, also takes a search word, and the current amount of entries in the dictionary
// ie : lookup(dictionary, wordInput, entries)
int lookup(const struct entry1 dictionaryx[], const char search[], const int entries){
    
    int i;
    // function prototype
    bool equalStrings(const char s1[], const char s2[]);
    
    // loops through the current amount of entries
    for(i = 0; i < entries; ++i){
        // compares the search word to member of the current instance of the entry struct
        
        if(equalStrings(search, dictionaryx[i].word))
            // if the words match return the current position of the word in the dictionary struct
            return i;
    }
    
    return -1;
}







