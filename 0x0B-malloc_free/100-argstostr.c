#include<stdlib.h>
#include<stdio.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: first argument
 * @av: second array arguement
 * Return: Always if true
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	char *current_arg;
	char *current_char, *newStr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	
	total_length = 0;
	
	for (i = 0; i < ac; i++)
	{
		current_arg = av[i];
		while (*current_arg != '\0')
		{
			total_length++;
			current_arg++;
		}
		total_length++;
	}
	
	*newStr = (char *)malloc(total_length);
	
	if (newStr == NULL)
	{
		return (NULL);
	}
	
	*current_char = newStr;
	
	for (i = 0; i < ac; i++)
	{
		*current_arg = av[i];
		
		while (*current_arg != '\0')
		{
			*current_char = *current_arg;
			current_char++;
			current_arg++;
		}
		
		if (i < ac - 1)
		{
			*current_char = '\n';
			current_char++;
		}
	}
	
	*current_char = '\0';
	return (newStr);
}
