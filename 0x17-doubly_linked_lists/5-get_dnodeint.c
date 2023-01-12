#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node
 * @head: pointer
 * @index: index of the node
 * Return: returns a node and if it does not exist return null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;

	int count = 0;

	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp->n);
		}
		count++;
		tmp = tmp->next;
	}
	return (tmp);
}
