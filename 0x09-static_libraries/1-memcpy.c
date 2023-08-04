#include<stdio.h>
#include "main.h"
/**
 * _memcpy - function that copies memory
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
