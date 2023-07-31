#include<stdio.h>
/**
 * set_string - function to set value of a pointer to char
 * @s: first argument
 * @to: second argument
 * Return: Always
 */
void set_string(char **s, char *to)
{
	*s = to;
}
