#include "main.h"

/**
 * print_binary - function to print the binary representation of a number
 * @n: takes in binary input
 * Return: returns null
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
