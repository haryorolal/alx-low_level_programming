#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: occurrence of the character
 * @s: in the string
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i;
	int found = 0;
	char *result = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			result = &s[i];
			found = 1;
			break;
		}
	}
	if (!found)
	{
		return (NULL);
	}
	else
	{
		return (result);
	}
}
