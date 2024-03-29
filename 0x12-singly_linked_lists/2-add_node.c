#include "lists.h"

/**
 * _strlen - finds string length
 * @str: string
 * Return: length
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
 * add_node - adds node at the beginning of a linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new node added
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

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

if (head == NULL)
{
new_node->next = NULL;
}
else
{
new_node->next = *head;
}
*head = new_node;

return (new_node);
}
