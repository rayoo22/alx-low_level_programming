#include "lists.h"
/**
 * free_list - frees memory occupied by linked list
 * @head: linked list
*/
void free_list(list_t *head)
{
while (head != NULL)
{
free(head->str);
free(head);
head = head->next;
}
}
