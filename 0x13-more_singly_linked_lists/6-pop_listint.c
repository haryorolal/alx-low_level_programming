#include "lists.h"
/**
 * pop_listint - function to deletes the head node
 * @head: hed node
 * Return: returns 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int retrn;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	retrn = temp->n;
	free(temp);
	return (retrn);
}
