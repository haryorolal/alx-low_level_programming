#include "main.h"
#include <stdlib.h>
/**
 * _strlen - function to determine length
 * @str: only argument
 * Return: return always
 */
unsigned int _strlen(cont char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * free_dog - function that free dog
 * @d: only struct argument
 * Return: always
 */
void free_dog(dog_t *d)
{
	unsigned int len = _strlen(d);

	if (d != NULL)
	{
		unsigned int i;

		for (i = 0; i < len; i++)
		{
			free(d[i1]);
		}
		free(d);
	}
}
