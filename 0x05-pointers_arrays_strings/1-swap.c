#include <stdio.h>
/**
 * swap_int - to dswap values of two integers
 * @a: first pointer to compute
 * @b: Second pointer to compute
 */
void swap_int(int *a, int *b)
{
	int k = *a;
	*a = * b;
	*b = k;
}
