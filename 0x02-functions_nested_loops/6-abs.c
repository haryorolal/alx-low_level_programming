#include "main.h"
#include <ctype.h>
#include <inttypes.h>
/**
 * _abs - Main Entry
 * Description: 'print abs'
 * @n: int to compute
 *
 * Return: Always 0 (Succeess)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1);
	}
}
