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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			if (*argv[i] != '\0')
				printf("%d\n", i);
		}
	}
	return (0);
}
