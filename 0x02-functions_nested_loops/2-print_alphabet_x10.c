#include "main.h"
/**
 * print_alphabet_x10 - Starting point
 * Description: '10 times alphabet'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int t = 0;

	while (t < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		t++;
	}
}
