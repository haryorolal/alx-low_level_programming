#include "lists.h"
/**
 * add_node - function that adds a new node
 * @head: double pointer variable
 * @str: stores element
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
