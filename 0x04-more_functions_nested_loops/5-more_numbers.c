#include "main.h"

/**
 * more_numbers - function to print more
 * Description: 'To print more numbers'
 *
 * Return: returns result
 */
void more_numbers(void)
{
	int c;
	c = 0;

	while (c < 10)
	{
		int b;
		b = 0;

		while (b < 14)
		{
			_putchar(b);
			b++;
		}

		_putchar(c);
		c++;
	}
	_putchar('\n');
}
