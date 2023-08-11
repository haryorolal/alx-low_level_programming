#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first argumennt
 * @s2: second argument
 * @n: third argument
 * Return: to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newS3;
        unsigned int s1_len;
        unsigned int s2_len;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	s1_len = 0;
        s2_len = 0;

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	newS3 = (char *)malloc(sizeof(char) * (s1_len + n + s2_len + 1));

	if (newS3 != NULL)
	{
		unsigned int i;

		for (i = 0; i < s1_len; i++)
		{
			newS3[i] = s1[i];
		}

		if (n >= s2_len)
		{
			for (i = 0; i < s2_len; i++)
			{
				newS3[s1_len + i] = s2[i];
			}
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				newS3[s1_len + i] = s2[i];
			}
		}
		newS3[s1_len + s2_len + n] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (newS3);
}
