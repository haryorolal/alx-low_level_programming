#include "lists.h"
/**
 * get_nodeint_at_index - function to return the nth node
 * @head: struct variable
 * @index: at positioning
 * Return: returns always
 */
listint_t *get_nodeint_at_index(listint_t *head,
		unsigned int index)
{
	listint_t *currentHead;

	unsigned int count;

	count = 0;
	currentHead = head;

	while (currentHead != NULL)
	{
		if (count == index)
		{
			return (currentHead);
		}
		count++;
		currentHead = currentHead->next;
	}
	return (NULL);
}
