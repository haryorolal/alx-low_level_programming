#include "lists.h"
/**
 * listint_len - function that returns number of elements in a list
 * @h: struct argument
 * Return: returns integer
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
