#include "main.h"
/**
 * clear_bit - function to set bit
 * @n: number
 * @index: location
 * Return: returns
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
