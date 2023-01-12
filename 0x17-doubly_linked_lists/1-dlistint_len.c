#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked dlistint_t list
 * @h: a variable
 * Return: function that returns the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
