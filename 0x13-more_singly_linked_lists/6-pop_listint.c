#include "lists.h"
/**
 * pop_listint - deletes the head node, and returns the head node's data
 * @head: linked list
 * Return: deleted head node's data
*/
int pop_listint(listint_t **head)
{
int data;
listint_t *tmp;

if (*head == NULL)
{
return (0);
}

tmp = *head;

data = tmp->n;

*head = tmp->next;
free(tmp);

return (data);
}
