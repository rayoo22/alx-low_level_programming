#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the line
 * @head: double pointer to the linked list
 * @str: string to put the new node
 * Return: address of the new end element added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	
	new_node = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}
