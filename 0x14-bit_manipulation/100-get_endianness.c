#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: returns value
 */
int get_endianness(void)
{
	int num;
	char *byte_ptr;

	num = 1;
	byte_ptr = (char *)&num;

	if (*byte_ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
