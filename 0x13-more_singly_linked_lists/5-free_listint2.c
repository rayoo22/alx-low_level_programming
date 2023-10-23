#include "lists.h"
/**
 * free_listint2 - frees a linked list, sets head to NULL
 * @head: linked list
*/
void free_listint2(listint_t **head)
{
listint_t *ptr;

if (head == NULL)
{
return;
}

while (*head != NULL)
{
ptr = *head;
*head = ptr->next;
free(ptr); 
}
}