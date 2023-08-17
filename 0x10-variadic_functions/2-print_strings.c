#include "variadic_functions.h"
/**
 * print_strings - function that print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *result;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(args, char *);
		printf("%s", result);

		if (result == NULL)
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
