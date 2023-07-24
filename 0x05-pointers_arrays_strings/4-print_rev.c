#include <stdio.h>
#include <string.h>
/**
 * print_rev - To print string in reverse
 * @s: as argument to compute
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; ++index)
		;

	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
