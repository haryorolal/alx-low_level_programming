#include "lists.h"
/**
 * print_list - function to print all elements of a list
 * @h: pointer to address of next node
 * Return: retuns
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

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
