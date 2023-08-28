#include "lists.h"
/**
 * print_listint - function that prints all the elemts of list
 * @h: head argument
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
