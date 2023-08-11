#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: first argument
 * @size: second argument
 * Return: returns pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        char *member;
	unsigned int i;

        if (nmemb == 0 || size == 0)
        {
                return (NULL);
        }

        member = malloc(nmemb * size);

        if (member != NULL)
        {
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
