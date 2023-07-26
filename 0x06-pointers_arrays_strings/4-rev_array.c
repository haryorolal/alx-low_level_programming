#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses array of integer
 * @a: first argument
 * @n: second argument
 * Return: Always return
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
