#include<stdio.h>
#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: first argument
 * @needle: second argument
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
