#include "main.h"
/* more headers goes there */
/**
 * positive_or_negative - function that prints positive or negative
 * Description: 'Print if positive or negative'
 * @i: argument to compute
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
