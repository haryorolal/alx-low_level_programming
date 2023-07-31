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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
