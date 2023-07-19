#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 * Description: 'check if letter'
 * @c: the character to be checked 
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
