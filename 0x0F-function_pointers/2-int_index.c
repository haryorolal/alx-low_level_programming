#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array to search for integer
 * @size: number of elements in array
 * @cmp: pointer to function used to compare
 * Return: if not matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL && cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
