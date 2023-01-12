#include "lists.h"

/**
 * free_dlistint - function that frees that frees a list 
 * @head: a variable of the function
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
