#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: pointer to a pointer pointing to the head node
 * @n: number
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new_node->n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
}
