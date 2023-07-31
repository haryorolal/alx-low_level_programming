#include<stdio.h>
#include "main.h"
/**
 * _strpbrk - function that searches for any set of bytes
 * Descripttion: 'To search string'
 * @s: first argument
 * @accept: second argument
 * Return: Always0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
