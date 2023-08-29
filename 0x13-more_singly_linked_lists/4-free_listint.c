#include "lists.h"
/**
 * free_listint - frees linked list listint_t
 * @head: the node to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
