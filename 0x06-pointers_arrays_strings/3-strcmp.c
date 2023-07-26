#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - function that compares two strings
 * @s1: argument1
 * @s2: argument2
 * Return: Always return
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
