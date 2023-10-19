#include "list.h"

/**
 * print_list - prints all elements of list_t
 * @h: head node
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
list_t *temp = h;

while (temp != NULL)
{
printf("%c", temp->str);
printf("%u", temp->len);
temp = temp->next;
}

}
