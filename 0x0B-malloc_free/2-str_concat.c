#include<stdio.h>
#include<stdlib.h>

/**
 * str_concat - function that concatenates two string
 * @s1: first argument
 * @s2: second argument
 * Return: Always if true
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *storeconcant;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	storeconcant = malloc(len1 + len2 + 1);

	if (storeconcant == NULL)
	{
		return (NULL);
	}
	else
	{
		int i;

		for (i = 0; i < len1; i++)
		{
			storeconcant[i] = s1[i];
		}

		for (i = 0; i < len2; i++)
		{
			storeconcant[len1 + i] = s2[i];
		}
		storeconcant[len1 + len2] = '\0';
		return (storeconcant);
	}
}
