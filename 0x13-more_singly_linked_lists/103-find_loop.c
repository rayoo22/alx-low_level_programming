#include "lists.h"
/**
 * find_listint_loop - finds the loop contained in a linked list
 * @head: a pointer to the head of the linked list
 * Return: if there is no loop - NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
{
return (NULL);
}

while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast ==slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}
return (NULL);
}
