#include "3-calc.h"
/**
 * main - function that takes two argument
 * @argc: first aargument
 * @argv: second argument
 * Return: returns always
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);

	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
