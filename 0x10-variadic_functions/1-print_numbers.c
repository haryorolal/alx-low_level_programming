#include "variadic_functions.h"
/**
 * print_numbers - function that print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: returns void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, result;

	if (separator != NULL)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			result = va_arg(args, int);
			printf("%d", result);

			if (i < n - 1);
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	_putchar('\n');
}
