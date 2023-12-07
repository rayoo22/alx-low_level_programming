#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a linked ;ist
 * @head: a pointer to te ead of the linked list
 * @n: int for the new node
 * Return: address of the new node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
		*head = new;
		return (new);

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;
	return (new);
}
