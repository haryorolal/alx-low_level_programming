#include "lists.h"
/**
 * insert_nodeint_at_index - to insert a new node at given position
 * @head: new head
 * @idx: index at position
 * @n: n
 * Return: returns address
 */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	listint_t *newNode, *current;
	unsigned int count = 0;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			newNode = current->next;
			current->next = newNode;
			return (newNode);
		}
		count++;
		current = current->next;
	}
	free(newNode);
	return (NULL);
}
