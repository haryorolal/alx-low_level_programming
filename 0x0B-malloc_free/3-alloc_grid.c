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
    if (width == 0 || height == 0)
    {
        return NULL;
    }

    int **newTwoDimentionalArray = malloc(sizeof(int*) * height);

    if (newTwoDimentionalArray != NULL)
    {
        for (int i = 0; i < height; i++)
        {
            newTwoDimentionalArray[i] = malloc(sizeof(int) * width);
            if (newTwoDimentionalArray[i] == NULL)
            {
		for (int j = 0; j < i; j++)
                {
                    free(newTwoDimentionalArray[j]);
                }
                free(newTwoDimentionalArray);
                return NULL;
            }

            for (int j = 0; j < width; j++)
            {
                newTwoDimentionalArray[i][j] = 0;
	    }
        }
    }

    return newTwoDimentionalArray;
}
