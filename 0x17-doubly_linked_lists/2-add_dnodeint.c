#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of list
 * @head: pointer to pointer to the head value
 * @n: integer for the new node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
