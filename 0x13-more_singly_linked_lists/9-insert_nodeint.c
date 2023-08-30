#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to the head node
 * @idx: index where to insert new node
 * @n: data to insert in the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint *t = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; t && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = t->next;
			t->next = new_node;
			return (new_node);
		}
		else
		{
			t = t->next;
		}
	}

	return (NULL);
}
