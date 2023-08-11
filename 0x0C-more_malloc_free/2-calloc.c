#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: first argument
 * @size: second argument
 * Return: returns pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *member;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	member = (unsigned int *)malloc(sizeof(int) * size);

	if (member != NULL)
	{
		unsigned int i;

		for (i = 0; i < nmemb; i++)
		{
			member[i] = 0;
		}
	}
	else
	{
		return (NULL);
	}
	return (member);
}
