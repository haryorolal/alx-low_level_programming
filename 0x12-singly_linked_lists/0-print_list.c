#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function to print all elements of a list
 * @h: pointer to address of next node
 * Return: retuns
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}

		size_t count = 0;

		while (h->str[count] != '\0')
		{
			count++;
		}

		printf("[%d] %s\n", count, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
