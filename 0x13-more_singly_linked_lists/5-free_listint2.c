#include "lists.h"
/**
 * free_listint2 - function to free a list
 * @head: struct variable
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *currentNode;

	if (head == NULL)
	{
		return;
	}

	currentNode = *head;
	while (currentNode != NULL)
	{
		temp = currentNode;
		currentNode = currentNode->next;
		free(temp);
	}
	*head = NULL;
}
