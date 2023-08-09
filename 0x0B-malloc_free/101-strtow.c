#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

// Function to determine if a character is a delimiter (space)
int isDelimiter(char c) {
    return (c == ' ');
}

// Function to count the number of words in the input string
int countWords(char *str) {
    int count = 0;
    int isWord = 0; // Flag to track whether we are in a word or not

    while (*str != '\0') {
        if (isDelimiter(*str)) {
            isWord = 0; // Reset flag when a delimiter is encountered
        } else if (!isWord) {
            isWord = 1; // Set flag when a non-delimiter character is encountered
            count++;    // Increment word count
        }
        str++;
    }

    return (count);
}

// Function to split the input string into words
char **strtow(char *str) {
    int wordCount = countWords(str);
    char **wordArray;

    if (wordCount == 0) {
        return (NULL);
    }

    wordArray = (char **)malloc(sizeof(char *) * (wordCount + 1));
    if (wordArray == NULL) {
        return (NULL); // Memory allocation failed
    }

    int wordIndex = 0;
    int isWord = 0; // Flag to track whether we are in a word or not
    char *wordStart = NULL;

    while (*str != '\0') {
        if (isDelimiter(*str)) {
            if (isWord) {
		int i;
                int wordLength;

		wordLength = str - wordStart; // Calculate word length
                wordArray[wordIndex] = (char *)malloc(wordLength + 1); // Allocate memory for the word
                if (wordArray[wordIndex] == NULL) {
                    // Memory allocation failed, clean up and return
                    while (wordIndex > 0) {
                        wordIndex--;
                        free(wordArray[wordIndex]);
                    }
                    free(wordArray);
                    return (NULL);
                }
                // Copy characters from wordStart to wordArray[wordIndex]
                for (i = 0; i < wordLength; i++) {
                    wordArray[wordIndex][i] = wordStart[i];
                }
                wordArray[wordIndex][wordLength] = '\0'; // Null-terminate the word
                wordIndex++; // Move to the next word in the wordArray
                isWord = 0;  // Reset flag
            }
        } else if (!isWord) {
            isWord = 1; // Set flag when a non-delimiter character is encountered
            wordStart = str; // Set the start of the word
        }
        str++;
    }

    // Handle the last word if there is one
    if (isWord)
    {
	int i;
        int wordLength; 
	
	wordLenght = str - wordStart;
        wordArray[wordIndex] = (char *)malloc(wordLength + 1);
        if (wordArray[wordIndex] != NULL) {
            for (i = 0; i < wordLength; i++) {
                wordArray[wordIndex][i] = wordStart[i];
            }
            wordArray[wordIndex][wordLength] = '\0';
        }
    }

    // Null-terminate the wordArray
    wordArray[wordCount] = NULL;

    return (wordArray);
}

// Function to free the memory allocated for wordArray
void freeWordArray(char **wordArray)
{
    int i;

    if (wordArray == NULL) {
        return;
    }

    i = 0;
    while (wordArray[i] != NULL) {
        free(wordArray[i]);
        i++;
    }
    free(wordArray);
}

