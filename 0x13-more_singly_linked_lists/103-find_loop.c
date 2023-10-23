#include "lists.h"
/**
 * find_listint_loop - finds the loop contained in a linked list
 * @head: a pointer to the head of the linked list
 * Return: if there is no loop - NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *turtle, *hare;

turtle = hare = head;

while (turtle != NULL && hare != NULL)
{
turtle = turtle->next;
hare = hare->next->next;

if (turtle == hare)
{
turtle = head;
while (turle != hare)
{
turtle = turtle->next;
hare = hare->next;
}
return (turtle);
}
}
return (NULL);
}
