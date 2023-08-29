#include "lists.h"
/**
 * add_nodeint - adds new node in the beginning
 * @head: pointer to pointer pointing to the head
 * @n: int to add
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	unsigned int len = 0;

	while (n[len])
	{
		len++;
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = strdup(n);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
