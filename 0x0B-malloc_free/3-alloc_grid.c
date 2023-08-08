#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - to return pointer to a 2 dimentional array of intergers
 * @width: first argument
 * @height: second argument
 * Return: Always if true
 */
int **alloc_grid(int width, int height)
{
	int **newTwoDimentionalArray;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	newTwoDimentionalArray = malloc(sizeof(int) * height);

	if (newTwoDimentionalArray != NULL)
	{
		int i, j;

		for (i = 0; i < height; i++)
		{
			newTwoDimentionalArray[i] = malloc(sizeof(int) * width);
			if (newTwoDimentionalArray[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(newTwoDimentionalArray[j]);
				}
				free(newTwoDimentionalArray[i]);
				return (NULL);
			}

			for (j = 0; j < width; i++)
			{
				newTwoDimentionalArray[i][j] = 0;
			}
		}
	}
	return (newTwoDimentionalArray);
}
