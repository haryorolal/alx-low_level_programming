#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncpy - function that copies a string
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: Always return
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
