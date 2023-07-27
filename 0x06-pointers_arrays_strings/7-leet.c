#include "main.h"
/**
 * leet - function that encodes a string
 * @b: argument
 * Return: Always return
 */
char leet(char *b)
{
	int i, j;
	char letter[] = "AeEeOoTtLl";
	char num[] = "4433007711";

	for (i = 0; b[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (b[i] == letter[i])
				b[i] = num[j];
		}
	}
	return (b);
}
