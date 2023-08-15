#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _strlen - Custom strlen function
 * @str: input string
 * Return: return length of string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * _strdup - function to copy string
 * @str: input string
 * Return: return pointer to newly allocated memory with copied string
 */
char *_strdup(const char *str)
{
	unsigned int len = _strlen(str);
	char *dupli;

	dupli = mallac(sizeof(char) * (len + 1));

	if (dupli != NULL)
	{
		unsigned int i;

		for (i = 0; i < len; i++)
			dupli[i] = str[i];
	}
	return (dupli);
}
/**
 * new_dog - function that creates a new dog
 * @name: first dog name
 * @age: second dog age
 * @owner: third dog owner
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog != NULL)
	{
		my_dog->name = _strdup(name);

		if (my_dog->name == NULL)
			free(my_dog);
			return (NULL);

		my_dog->age = age;
		my_dog->owner = _strdup(owner);

		if (my_dog->owner == NULL)
			free(my_dog->name);
			free(my_dog);
			return (NULL);
	}
	else
	{
		return (NULL);
	}
	return (my_dog);
}
