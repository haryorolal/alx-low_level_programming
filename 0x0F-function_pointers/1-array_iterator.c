#include "function_pointers.h"
/**
 * array_iterator - function that executes parameter on each element
 * @array: first argument
 * @size: second argument
 * @action: function argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
