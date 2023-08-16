#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: pointer array argument
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
