#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - function that returns value of x raise to power y
 * @x: first argument
 * @y: second argument
 * Return: Always success
 */
int _pow_recursion(int x, int y)
{
	if (x < 0)
	{
		return (-1);
	}
	else if (x == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
