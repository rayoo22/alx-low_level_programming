#include "lists.h"
/**
 * _r - reallocates memory fro an array of pointers
 * @list: the old list to append
 * @size: size of the new list, its an increment from previos list
 * @new: new node to add to the list
 * Return: pointer to the new list
*/
const listsint_t **_r(const listint_t **list, size_t size, const listsint_t *new)
{
const listsint_t **newlist;
size_t i;

newlist = malloc(size *sizeof(listint_t));
if (newlist == NULL)
{
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
{
newlist[i] = list[i];
}
newlist[i] = new;
free(list);
return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to te start of the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t i, num = 0;
const listint_t **list = NULL;

while (head != NULL)
{
for (i = 0; i < num; i++)
{
if (head == list[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (num);
}
}
num++;
list = _r(list, num, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(list);
return (num);
}
