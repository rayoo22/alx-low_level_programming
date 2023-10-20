#include "lists.h"
/**
 * list_len - number of elements in a linked list_t list
 * @h: the linked list
 * Return: number of elements of the linked lists
*/
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)/* if a node does not exist */
{
count++;
h = h->next;
}

return (count);
}
