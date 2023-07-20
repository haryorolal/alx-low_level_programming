#include "main.h"
/**
 * print_line - function to print line
 * Description: 'To print line'
 * @n: argument to compute
 */
void print_line(int n)
{        
        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                int i = 0;

                while (i < n)
                {
                        _putchar('_');
                        i++;
                }
                _putchar('\n');
        }
}
