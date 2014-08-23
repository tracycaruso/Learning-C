//  Learning-C-Practice
//  Character Strings
//  Chapter 10.10
//  Dictionary Look up

#include "stdio.h"

struct entry1{
    char word[15];
    char definition[45];
};

int main (void){
    const struct entry1 dictionary[100] = {
        {"aardvark", "a burrowing African mammal" }, // dictionary[0].word, dictionary[0].definition
        {"abyss", "a bottomless pit" }, // dictionary[1].word, dictionary[1].definition
        {"acumen", "mentally sharp" }, // dictionary[2].word, dictionary[2].definition
        {"addle", "to become confused" }, // dictionary[3].word, dictionary[3].definition
        {"aerie", "a high nest" }, // dictionary[4].word, dictionary[4].definition
        {"affix", "to append" }, // dictionary[5].word, dictionary[5].definition
        {"agar", "a jelly made from seaweed" }, // dictionary[6].word, dictionary[6].definition
    };
    
    int entries = 10;
    char wordInput[15];
    int entry;
    int lookup (const struct entry1 dictionary[], const char search[], const int entries);
    
    printf("enter word : ");
    scanf("%14s", wordInput);
    
    // find the index of the dictionary word
    entry = lookup(dictionary, wordInput, entries);
    
    if(entry != -1){
        // print the defintion of the matching index
        printf("%s\n", dictionary[entry].definition);
    }
    else
        printf("Sorry");
    
    return 0;
}


int compareStrings(const char s1[], const char s2[]){
    
    int i = 0, answer;
    
    // while the current characters match... loop through
    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        i++;
    }
    
    // if the first character comes before the second return -1
    if(s1[i] < s2[i]){
        answer = -1;
    }
    // the characters are the same... will only reach this conclusion if both are at \0 return 0
    else if (s1[i] == s2[i]){
        answer = 0;
    }
    
    // else is the first character comes after the second return 1
    else answer = 1;
    
    return answer;
}

int lookup (const struct entry1 dictionary[], const char search[], const int entries){
    int low = 0;
    int high = entries -1;
    int mid, result;
    int compareStrings(const char s1[], const char s2[]);
    
    
    while(low <= high){
        // take the average of the high and low
        // (0 + 10) / 2 = 5
        mid = (low + high) / 2;
        // use the average to find the middle dictionary word
        // return where the searched word is relative to the middle word
        result = compareStrings(dictionary[mid].word, search);
        
        // if the dictionary word is before the searched word
        // search the top half
        if(result == -1)
            // low = 5 + 1
            // high remains the same = 10
            low = mid +1;
        
        else if ( result == 1)
            // if the dictionary word comes after the search word
            // search the bottom half
            // high = 5 - 1
            // low remains 0
            high = mid - 1;
        
        else
            // else the word index has been found
            // end the loop and return the index
            return mid;
    }
    
    return -1;
}