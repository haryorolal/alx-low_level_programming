#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - function that return pointer to newly allocted space in memory
 * @str: only argument
 * Return: Alwyas if success
 */
char *_strdup(char *str)
{
	char *newstr;
	int len;
	char *currentStr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	currentStr = str;

	while (*currentStr != '\0')
	{
		len++;
		currentStr++;
	}

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr != NULL)
	{
		int i;

		for (i = 0; i < len; i++)
		{
			newstr[i] = str[i];
		}

		newstr[len] = '\0';
		return (newstr);
	}
	else
	{
		return (NULL);
	}
}
