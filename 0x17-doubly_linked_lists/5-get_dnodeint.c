#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node in a doubly linked list
 * @head: pointer to the list
 * @index: position of the node to get
 * Return: address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	tmp = head;
	i = 0;
	if (head == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		if (i == index)
		return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
