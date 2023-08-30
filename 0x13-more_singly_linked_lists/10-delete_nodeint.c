#include "lists.h"
/**
 * delete_nodeint_at_index - function to deletes the node at index
 * @head: first va
 * @index: second va
 * Return: returns
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		count++;
	}
	return (-1);
}
