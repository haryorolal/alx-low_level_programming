#include "lists.h"
/**
 * delete_nodeint_at_index - function to deletes the node at index
 * @head: first va
 * @index: second va
 * Return: returns
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	while (current != NULL)
	{
		if (count == index)
		{
			temp = current;
			current = current.next;
			free(temp);
			return (1);
		}
		count++;
	}
	return (-1);
}
