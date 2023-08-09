#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int isDelimiter(char c) {
    return (c == ' ');
}

int countWords(char *str) {
    int count = 0;
    int isWord = 0;

    while (*str != '\0') {
        if (isDelimiter(*str)) {
            isWord = 0;
        } else if (!isWord) {
            isWord = 1;
            count++;
        }
        str++;
    }

    return (count);
}

char **strtow(char *str) {
    int wordCount = countWords(str);
    char **wordArray;
    int wordIndex;
    int isWord;
    char *wordStart;

    if (wordCount == 0) {
        return (NULL);
    }

    wordArray = (char **)malloc(sizeof(char *) * (wordCount + 1));
    if (wordArray == NULL) {
        return (NULL);
    }

    wordIndex = 0;
    isWord = 0;
    wordStart = NULL;

    while (*str != '\0') {
        if (isDelimiter(*str)) {
            if (isWord) {
		int i;
                int wordLength;

		wordLength = str - wordStart;
                wordArray[wordIndex] = (char *)malloc(wordLength + 1);

                if (wordArray[wordIndex] == NULL) {
			
		    while (wordIndex > 0) {
                        wordIndex--;
                        free(wordArray[wordIndex]);
                    }
                    free(wordArray);
                    return (NULL);
                }
                
                for (i = 0; i < wordLength; i++) {
                    wordArray[wordIndex][i] = wordStart[i];
                }
                wordArray[wordIndex][wordLength] = '\0';
		wordIndex++;
                isWord = 0;
            }
        }
	else if (!isWord) {
            isWord = 1;
	    wordStart = str;
        }
        str++;
    }

    if (isWord)
    {
	int i;
        int wordLenght; 
	
	wordLenght = str - wordStart;
        wordArray[wordIndex] = (char *)malloc(wordLength + 1);
        if (wordArray[wordIndex] != NULL) {
            for (i = 0; i < wordLength; i++) {
                wordArray[wordIndex][i] = wordStart[i];
            }
            wordArray[wordIndex][wordLength] = '\0';
        }
    }

    wordArray[wordCount] = NULL;

    return (wordArray);
}

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

