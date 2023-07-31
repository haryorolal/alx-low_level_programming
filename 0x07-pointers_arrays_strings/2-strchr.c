#include<stdio.h>
#include "main.h"
/**
 * _strchr - Function that locates a character in a string
 * @s: first argument
 * @c: second argument
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;
	char *result;
	int isfound = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			isfound = 1;
			result = &s[i];
			break;
		}
	}
	if (isfound)
	{
		return (result);
	}
	else
	{
		isfound = 0;
		return (NULL);
	}
	return (0);
}
