#include "main.h"
/**
 * get_bit - function to get bit
 * @n: number
 * @index: location
 * Return: returns
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
