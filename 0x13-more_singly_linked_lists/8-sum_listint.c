#include "lists.h"
/**
 * sum_listint - calculates the sum of data stored in nodes
 * @head: head node of te linked list
 * Return: total sum of data
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *t = head;

	while (t)
	{
		total += t->n;
		t = t->next;
	}

	return (total);
}
