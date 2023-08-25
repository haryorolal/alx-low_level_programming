#include "lists.h"
/**
 * print_list - function to print all elements of a list
 * @h: pointer to address of next node
 * Return: retuns
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count = 0;

		if (h->str == NULL)
		{
			printf("[%lu] (nil)\n", count);
		}
		else
		{
			while (h->str[count] != '\0')
			{
				count++;
			}
			printf("[%lu] %s\n", count, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
