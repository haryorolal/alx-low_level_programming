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
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	
	int total_length = 0;
	int i;
	
	for (i = 0; i < ac; i++)
	{
		char *current_arg = av[i];
		while (*current_arg != '\0')
		{
			total_length++;
			current_arg++;
		}
		total_length++;
	}
	
	char *newStr = (char *)malloc(total_length);
	
	if (newStr == NULL)
	{
		return (NULL); // Memory allocation failure
	}
	
	char *current_char = newStr;
	
	for (i = 0; i < ac; i++)
	{
		char *current_arg = av[i];
		
		while (*current_arg != '\0')
		{
			*current_char = *current_arg;
			current_char++;
			current_arg++;
		}
		
		if (i < ac - 1)
		{
			*current_char = '\n'; // Add space between words
			current_char++;
		}
	}
	
	*current_char = '\0'; // Null-terminate the concatenated string
	return (newStr);
}
