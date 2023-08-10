#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void fetwod(char **, char *);
void create_wod(char **, char *, int, int, int);
/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = flag = len = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	fetwod(words, str);
	words[len] = NULL;
	return (words);
}

/**
 * fetwod - a function for fetching words into an array
 * @wods: the strings array
 * @str: the string
 */
void fetwod(char **wods, char *str)
{
	int i, j, start, flag;

	i = j = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_wod(wods, str, start, i, j);
			j++;
			flag = 0;
		}

		i++;
	}

	if (flag == 1)
		create_wod(wods, str, start, i, j);
}

/**
 * create_wod - creates a word and insert it into the array
 * @words: the array of strings
 * @str: the string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @indes: the index of the array to insert the word
 */
void create_wod(char **wods, char *str, int start, int end, int indes)
{
	int i, j;

	i = end - start;
	wods[indes] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		wods[indes][j] = str[start];
	wods[indes][j] = '\0';
}
