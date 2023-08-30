#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node in the linked list
 * @index: node's index to return
 * Return: pointer to the node to get
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *t = head;

	while (t && i < index)
	{
		t = t->next;
		i++;
	}

	return (t ? t : NULL);
}
