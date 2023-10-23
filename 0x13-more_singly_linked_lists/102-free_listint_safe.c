#include "lists.h"
/**
 * _ra - reallocates memory for an array of pointers
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 * Return: pointer to the new list
*/
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
size_t len = 0;
int diff;
listint_t *temp;

if (!h || !*h)
{
return (0);
}

while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}
*h = NULL;
return (len);
}

