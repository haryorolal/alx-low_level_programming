#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: first argument in variadic
 * @...: multiple arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum, result = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(arg, n);

		for (i = 0; i < n; i++)
		{
			sum = va_arg(arg, int);
			result += sum;
		}
	}

	va_end(arg);
	return (result);
}
