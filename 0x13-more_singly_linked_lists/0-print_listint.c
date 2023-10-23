#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: linked list
 * Return: number of nodes
*/
size_t print_listint(const listint *h)
{
size_t num_nodes = 0;

while (h != NULL)
{
printf("%d\n", h->n);

nu_nodes += 1;
h = h->next;
}
return (num_nodes);
}