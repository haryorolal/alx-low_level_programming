#include<stdio.h>
#include<stdlib.h>

/**
 * str_concat - function that concatenates two string
 * @s1: first argument
 * @s2: second argument
 * Return: Always if true
 */
#include <stdio.h>
#include <stdlib.h>

char *str_concat(const char *s1, const char *s2)
{
	int len1;
	int len2;
	char *concat;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL); /* Handle NULL inputs*/
	}

	/* Calculate lengths of the input strings*/

	len1 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;

	while (s2[len2] != '\0')
	{
		len2++;
	}

	/* Allocate memory for the concatenated string*/
	concat = malloc(len1 + len2 + 1);

	if (concat != NULL)
	{
		int i;

		for (i = 0; i < len1; i++)
		{
			concat[i] = s1[i];
		}

		for (i = 0; i < len2; i++)
		{
			concat[len1 + i] = s2[i];
		}
		concat[len1 + len2] = '\0';
	}
	return (concat);
}
