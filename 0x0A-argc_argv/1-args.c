#include<stdio.h>
#include<string.h>
/**
 * main - print its name followed by new line
 * @argc: first argument
 * @argv: second argument
 * Return: if Success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
