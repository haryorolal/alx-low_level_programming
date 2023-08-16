#include "3-calc.h"
/**
 * op_add - function that returns sum of a and b
 * @a: first operand
 * @b: second operand
 * Return: returns sum of a and b
 */
int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}
/**
 * op_sub - function that returns difference of a and b
 * @a: first operand
 * @b: second operand
 * Return: returns difference of a and b
 */
int op_sub(int a, int b)
{
	int diff;

	diff = (a - b);
	return (diff);
}
/**
 * op_mul - function that returns multiplication of a and b
 * @a: first operand
 * @b: second operand
 * Return: returns mul of a and b
 */
int op_mul(int a, int b)
{
	int prduct;

	prduct = (a * b);
	return (prduct);
}
/**
 * op_div - function that returns result of a and b
 * @a: first operand
 * @b: second operand
 * Return: returns result of a and b
 */
int op_div(int a, int b)
{
	int result;

	if (a != 0 && b != 0)
	{
		result = (a / b);
	}
	return (result);
}
/**
 * op_mod - function that returns remainder of a and b
 * @a: first operand
 * @b: second operand
 * Return: returns remainder of a and b
 */
int op_mod(int a, int b)
{
	int rem;

	if (a != 0 && b != 0)
	{
		rem = (a % b);
	}
	return (rem);
}
