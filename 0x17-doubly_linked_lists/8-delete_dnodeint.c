#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at dx
 * @head: pointer to head node
 * @index: index
 * Return: 1 for success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del == NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	del = *head;

	if (index == 0)
		*head = (*head)->next;
		free(del);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);

	while ((index != 0) && (del->next != NULL))
	{
		index -= 1;
		del = del->next;
	}
	if (index == 0)
	{
		del->prev->next = del->next;
		if (del->next != NULL)
			del->next->prev = del->prev;
		free(del);
		return (1);
	}
	return (-1);
}
