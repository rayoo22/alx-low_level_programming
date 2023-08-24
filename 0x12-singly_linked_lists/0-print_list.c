#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: pointer to node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	h = head;
	size_t num = 0;

	if ((h->str) == NULL)
	{
		printf("[0] (nil)");
	}
	
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	printf("%d", num); 

}
