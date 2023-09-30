#include "main.h"
/**
 * get_bit - function that return value of a bit at given index
 * @n: first argument
 * @index: second argument
 * Return: returns value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsgined long int) * 8)
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
