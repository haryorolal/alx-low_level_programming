#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - To concatenantes two string
 * @dest: first argument
 * @src: second argument
 * Return: Always returns result
 */
char *_strcat(char *dest, char *src)
{
if (*dest != '\0')
{
dest = strcat(dest, src);
}
return (dest);
}
