#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * free_grid - function that fress a 2 dimentional grid previously created
 * @grid: first argument
 * @height: second argument
 * Return: Always if success
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		return;
	}
	else
	{
		int i;

		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		free(grid);
	}
}
