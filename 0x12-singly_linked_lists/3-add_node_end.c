#include "lists.h"
/**
 * _strlen - finds string length
 * @str: string
 * Return: length of string
*/
int _strlen(const char *str)
{
int len;

for (len = 0; str[len] != '\0'; len++)
{
;
}

return (len);
}

/**
 * add_node_end - adds node to the end of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *tmp;

if (str == NULL)
{
return (NULL);
}
if (strdup(str) == NULL)
{
return (NULL);
}

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->str = strdup(str);
new_node->len = _strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
tmp = *head;

while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new_node;
}
return (new_node);
}
