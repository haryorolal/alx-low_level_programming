#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
/**
 * malloc_checked - function that allocates memory
 * @b: first operand
 * Return: Always return
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
