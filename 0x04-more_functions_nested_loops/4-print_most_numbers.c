#include "main.h"

/**
 * print_most_numbers - function to print num
 * Description: 'To print numbers'
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int num;
	num = 0;

	while (num < 9)
	{
		if (num == 2 || num == 4)
		{
		}			
		else
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
