#include "main.h"

/**
 * print_line - function to print line
 * Description: 'To print line'
 * @n: argument to compute
 *
 * Return: Always 0
 */
void print_line(int n)
{
        char d = '_';
        int i;
        i = 0;

        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                while (i < n)
                {
                        _putchar(d);
                        i++;
                }
		_putchar('\n');
        }
}
