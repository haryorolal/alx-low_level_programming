#include "main.h"
/**
 * print_binary - functions to print the binary representation of a number
 * @n: number
 * Return: returns nothing
 */
void print_binary(unsigned long int n)
{
	char result;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	result = (n & 1) + '0';
	_putchar(result);
}
