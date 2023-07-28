#include "main.h"
#include <stdio.h>
/**
 * print_number - function to print integers
 * @n: only argument
 */
void print_number(int n)
{
	int i;
	int *s;

	while (i < 10)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			n = s[i];
			_putchar(n);
		}
		i++;
	}
}
