#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer array
 * @old_size: size of old array
 * @new_size: size of new array
 * Return: returns pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	unsigned int min_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	newPtr = malloc(new_size);

	if (newPtr != NULL)
	{
		unsigned int i;

		if (old_size < new_size)
		{
			min_size = old_size;
		}
		else
		{
			min_size = new_size;
		}

		for (i = 0; i < min_size; i++)
		{
			*((char *)newPtr + i) = *((char *)ptr + i);
		}
	}
	else
	{
		return (NULL);
	}
	free(ptr);
	return (newPtr);
}
