#include "lists.h"
/**
 * add_nodeint_end - function that adds new node to end of a list
 * @head: struct variable
 * @n: number of element of struct
 * Return: returns new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currentNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
	}

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;
		newNode->next = NULL;

		if (*head == NULL)
		{
			*head = newNode;
		}
		else
		{
			currentNode = *head;
			while (currentNode->next != NULL)
			{
				currentNode = currentNode->next;
			}
			currentNode->next = newNode;
		}
		return (newNode);
	}
}
