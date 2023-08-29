#include "lists.h"
/**
 * sum_listint - functiont that returns sum of all data
 * @head: struct head
 * Return: returns sum n
 */
int sum_listint(listint_t *head)
{
	listint_t *currentHead;
	int sum = 0;

	currentHead = head;
	if (head == NULL)
		return (0);

	while (currentHead != NULL)
	{
		sum += (currentHead)->n;
		currentHead = currentHead->next;
	}
	return (sum);
}
