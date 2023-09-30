#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to print standard
 * @c: char as an argumen
 * Return: returns
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
