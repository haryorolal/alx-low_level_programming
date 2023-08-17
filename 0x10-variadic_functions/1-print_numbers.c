#include "variadic_functions.h"
/**
 * print_numbers - function that print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, result;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(args, int);
		printf("%d", result);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
