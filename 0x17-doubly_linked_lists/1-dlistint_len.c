#include "lists.h"
#include <stdio.h>
#include <stdlib>

/**
 * dlistint_len - returns the number of elements in list
 * @h: the head node of the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	dlistint_t *ptr;
	
	count = 0;
	ptr = h;

	if (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
