#include "main.h"
#include <stdlib.h>
/**
 * free_dog - function that free dog
 * @d: only struct argument
 * Return: always
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
