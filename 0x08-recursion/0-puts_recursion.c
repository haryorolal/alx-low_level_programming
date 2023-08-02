#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function to print a string
 * @s: first argument
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
;
}
