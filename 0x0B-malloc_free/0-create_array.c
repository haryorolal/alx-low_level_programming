#include<stdio.h>
#include<stdlib.h>
/**
 * *create_array - function to creates array of char
 * @size: size of array
 * @c: char in array
 * Return: Always, if true
 */
char *create_array(unsigned int size, char c)
{
	char *arrCh;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arrCh = malloc(sizeof(char) * size);

	if (arrCh == NULL)
	{
		return NULL;
	}

	while (i < size)
	{
		arrCh[i] = c;
		i++;
	}

	return (arrCh);
}
