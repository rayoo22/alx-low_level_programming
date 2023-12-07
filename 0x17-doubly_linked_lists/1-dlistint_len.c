#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - returns the number of elements in list
 * @h: the head node of the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
