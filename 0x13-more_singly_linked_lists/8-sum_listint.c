#include "lists.h"
/**
 * sum_listint - return sum of a data in linked list
 * @head: pointer to head pointer 
 * Return: sum, or 0 if list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}