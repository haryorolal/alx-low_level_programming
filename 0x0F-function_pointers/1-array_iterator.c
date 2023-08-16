#include "function_pointers.h"
/**
 * array_iterator - function that executes parameter on each element
 * @array: array to execute function
 * @size: size of array
 * @action: pointer to a function argument
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
