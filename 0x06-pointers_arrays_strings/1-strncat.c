#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncat - to concatenates two strings
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: Always return result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
