#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - function to print char
 * @c: character
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
