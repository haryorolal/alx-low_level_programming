#include "main.h"
/**
 * print_diagonal - function to print diagonal line
 * Description: 'To print diagonal line'
 * @n: argument to compute
 */
void print_diagonal(int n)
{        
	if (n <= 0)
	{
		 _putchar('\n');
	}	
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
                }
                _putchar('\n');
        }
}
