#include "lists.h"
/**
 * pop_listsint - deletes the head node of a linked list
 * @head: pointer to the first element
 * Return: 0 if list is empty, data deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int num;

	if (!head || !*head)
	{
		return (0);
	}

	num = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (num);
}
