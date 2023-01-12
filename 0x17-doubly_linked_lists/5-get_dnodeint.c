#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node
 * @head: pointer
 * @index: index of the node
 * Return: returns a node and if it does not exist return null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp;
unsigned int i;

tmp = head;
i = 0;

if (head ==NULL)
return (NULL);

while (tmp != NULL)
{
if (i == index)
return (tmp)

tmp = tmp->next;
i++;
}
return (NULL);
}
