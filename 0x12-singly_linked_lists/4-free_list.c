#include "lists.h"
/**
 * free_list - fress a list
 * @head: only argument
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	free(head);
	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}
