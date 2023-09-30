#include "main.h"
/**
 * clear_bit - function that set value of a bit at given index
 * @n: first argument
 * @index: second argument
 * Return: returns value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
