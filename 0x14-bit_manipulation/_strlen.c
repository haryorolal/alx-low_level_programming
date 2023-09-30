#include <stdio.h>

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
