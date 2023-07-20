#include "main.h"

/**
 * print_numbers - function to print numbers
 * Description: 'To print numbers'
 *
 * Return: Always return 0 (Success)
 */
void print_numbers(void)
{
	int c;
	c = 0;

	while (c <= 9)
	{
		c++;
		_putchar(c);
	}
	_putchar('\n');
}
