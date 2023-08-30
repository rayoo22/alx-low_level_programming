#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the head node
 * @index: index at which to insert new node
 * Return: 1 for success -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *current = NULL;
	unisgned int i = 0;

	if *(head == NULL){
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (i < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		i++;
	}

	current = t->next;
	t->next = current->next;
	free(current);

	return (1);
}
