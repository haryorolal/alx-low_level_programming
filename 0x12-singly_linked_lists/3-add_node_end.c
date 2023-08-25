#include "lists.h"
/**
 * add_node_end - function that adds a new node to the end of a list
 * @head: start of a list
 * @str: stores list
 * Return: returns new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			current = *head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = new_node;
		}
	}
	return (new_node);
}
