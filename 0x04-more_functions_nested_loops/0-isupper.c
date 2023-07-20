#include "main.h"
#include <ctype.h>

/**
 * _isupper - Main Entry to check uppercase
 * Description: 'Checks if uppercase'
 * @c: only argument
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
