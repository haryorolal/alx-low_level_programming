#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * isDelimeter - to determine if character is a delimeter
 * @c: only argument
 * Return: Always if success
 */

int isDelimiter(char c)
{
	return (c == ' ');
}
/**
 * countWords - function that splits a string into words
 * @str: only argument
 * Return: Always if true
 */

int countWords(char *str)
{
	int count = 0;
	int isWord = 0;

	while (*str != '\0')
	{
		if (isDelimiter(*str))
		{
			isWord = 0;
		}
		else if (!isWord)
		{
			isWord = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - function that splits a string into words
 * @str: only argument
 * Return: Always if true
 */
char **strtow(char *str)
{
	int wordCount = countWords(str);
	int wordIndex;
	int isword;
	char *wordStart;
	char **wordArray;
	int wordLength;

	if (wordCount == 0)
		return (NULL);

	wordArray = (char **)malloc(sizeof(char *) * (wordCount + 1));

	if (wordArray == NULL)
		return (NULL);

	wordIndex = 0;
	isword = 0;
	*wordStart = NULL;

	while (*str != '\0')
	{
		int i;

		if (isDelimiter(*str))
		{
			if (isword)
			{
				wordLength = str - wordStart;
				wordArray[wordIndex] = (char *)malloc(wordLength + 1);
				if (wordArray[wordIndex] == NULL)
				{
					while (wordIndex > 0)
					{
						wordIndex--;
						free(wordArray[wordIndex]);
					}
					free(wordArray);
					return (NULL);
				}
				
				for (i = 0; i < wordLength; i++)
				{
					wordArray[wordIndex][i] = wordStart[i];
				}
				wordArray[wordIndex][wordLength] = '\0';
				wordIndex++;
				isword = 0;
			}
			else
			{
				isword = 1;
				wordStart = str;
			}
			str++;
		}
	}

		if (isword)
		{
			int wordLength, i;

			wordLength = str - wordStart;
			wordArray[wordIndex] = (char *)malloc(wordLength + 1);
			if (wordArray[wordIndex] != NULL)
			{
				for (i = 0; i < wordLength; i++)
					wordArray[wordIndex][i] = wordStart[i];
				wordArray[wordIndex][wordLength] = '\0';
			}
		}

		wordArray[wordCount] = NULL;

		return (wordArray);
	}
}

/**
 * freeWordArray - function that splits a string into words
 * @wordArray: only argument
 * Return: Always if true
 */
void freeWordArray(char **wordArray)
{
	if (wordArray == NULL)
		return;

	int i = 0;
	while (wordArray[i] != NULL)
	{
		free(wordArray[i]);
		i++;
	}
	free(wordArray);
}
