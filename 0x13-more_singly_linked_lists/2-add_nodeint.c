#include "lists.h"
/**
 * add_nodeint - function to add a new node at the beginning of a list
 * @head: struct variable
 * @n: number of node
 * Return: returns new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		if (newNode == NULL)
		{
			return (NULL);
		}
		else
		{
			newNode->n = n;
			newNode->next = *head;
			*head = newNode;

			return (newNode);
		}
	}
}
