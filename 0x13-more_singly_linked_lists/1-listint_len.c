#include "lists.h"
/**
 * listint_len - returns the numberof elements in a linked list
 * @h: pointer to a node of a linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;

	}
	return (num);
}
