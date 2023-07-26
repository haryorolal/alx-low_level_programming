#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcm - function that compares two strings
 * @s1: argument1
 * @s2: argument2
 * Return: Always return
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				continue;		
			}else if (s1[i] < s2[j])
			{
				return (-1);
			}else
				return (1);
		}
	}
	return (0);
}
