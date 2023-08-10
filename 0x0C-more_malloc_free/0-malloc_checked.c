#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * @b: allocated memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memoSaver;

	memoSaver = malloc(b);
     
	if (memoSaver == NULL)
	{
		exit(98);
	}
	return (memoSaver);
}
