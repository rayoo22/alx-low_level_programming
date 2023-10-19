#include "lists.h"
/**
 * list_len - number of elements in a linked list_t list
 * @h: head node
 * Returns: number of elements of the linked lists
*/
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h->next != NULL)
{
h->next;
count++;
}
return (count);
}