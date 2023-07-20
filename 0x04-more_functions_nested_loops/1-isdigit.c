#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Entry to check digit
 * Description: 'Checks if a digit'
 * @c: only argument to compute
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
