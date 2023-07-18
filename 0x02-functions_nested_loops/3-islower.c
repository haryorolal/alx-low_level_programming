#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 * Description: 'Checks for lowercase'
 * Parameter - 'Recieves'
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
