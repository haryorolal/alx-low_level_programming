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
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arrCh = malloc(sizeof(arrCh) * size);

	while (i < size)
	{
		arrCh[i] = c;
		i++;
	}

	if (arrCh)
	{
		return (arrCh);
	}
	else
	{
		return (NULL);
	}

	free(arrCh);
}
