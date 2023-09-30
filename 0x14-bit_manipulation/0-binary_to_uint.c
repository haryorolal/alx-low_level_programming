#include "main.h"

/**
 * custom_strlen - function to calculate len of a string
 * @str: point to char that takes in argument
 * Return: returns count;
 */
int custom_strlen(const char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: pointer to char as first argument
 * Return: returns converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = custom_strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				result += base;
			}
			base *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
