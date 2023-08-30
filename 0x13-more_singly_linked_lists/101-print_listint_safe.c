#include "lists.h"

size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - counts no. of unique nodes looped
 * @head: a pointer to the head node 
 * Return: 0 if list is nt looped, otherwise no. of unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tot, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tot = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tot == hare)
		{
			tot = head;
			while (tot != hare)
			{
				nodes++;
				tot = tot->next;
				hare = hare->next;
			}

			tot = tot->next;
			while (tot != hare)
			{
				nodes++;
				tot = tot->next;
			}
			return (nodes);
		}

		tot = tot->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint list safely
 * @head: a pointer to the head of the liked list
 * Return: no. of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
