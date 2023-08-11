#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: returns pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *resultArr;

	if (min > max)
		return (NULL);

	resultArr = malloc(sizeof(int) * (max - min + 1));

	if (resultArr != NULL)
	{
		int i;

		for (i = 0; i <= (max - min); i++)
		{
			resultArr[i] = min + i;
		}
	}
	else
	{
		return (NULL);
	}
	return (resultArr);
}
