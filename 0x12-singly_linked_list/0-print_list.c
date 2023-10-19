#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: head node
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
while (h != NULL)
{
printf("%c", h->str);
printf("%u", h->len);
h = h->next;
}

}
