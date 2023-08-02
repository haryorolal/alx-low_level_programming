#include "main.h"
#include <stdio.h>

/**
 * factorial - to return the factorial of a given number
 * @n: first argument
 * Return: Always return
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
