#include "main.h"
#include <stdio.h>
/**
 * support_function - helper function
 * @number: first argument
 * @root: second argument
 * Return: Always
 */
int support_function(int number, int root)
{
	if ((root * root) > number)
	{
		return (-1);
	}
	else if ((root * root) == number)
	{
		return (root);
	}
	else
	{
		return (support_function(number, root + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root
 * @n: first argument
 * Return: Always success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (support_function(n, 0));
	}
}
