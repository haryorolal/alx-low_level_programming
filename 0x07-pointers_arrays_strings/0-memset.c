#include<stdio.h>
#include "main.h"
/**
 * _memset - Fills the first n bytes of memory
 * @s: first argument
 * @b: second argument
 * @n: third argument
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
