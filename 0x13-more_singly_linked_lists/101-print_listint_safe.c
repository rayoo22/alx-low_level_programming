#include "lists.h"
/**
 * _r - reallocates memory fro an array of pointers
 * @list: the old list to append
 * @size: size of the new list, its an increment from previos list
 * @new: new node to add to the list
 * Return: pointer to the new list
*/
int count_nodes_till_loop(const listint_t *head)
{
int count = 0;
const listint *turtle, *hare;

turtle = hare = head;

while (turtle != NULL && hare != NULL)
{
turtle = turtle->next;
hare = hare->next->next;
count++;

if (turtle == hare)
{
turtle = head;
while (turtle != hare)
{
turtle = turtle->next;
hare = hare->next;
count++;
}
return (count);
}
}
return (0);
}

/**
 * loop - find if there's a loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: 0 if no loop, 1 if loop
*/
int loop(const listint_t *head)
{
const listint_t *turtle, *hare;

turtle = hare = head;

while (turtle != NULL && hare != NULL)
{
turtle = turtle->next;
hare = hare->next->next;

if (turtle == hare)
{
return (1);
}
}
return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to te start of the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
int count = 0;
int loop_found;
size_t num_nodes = 0;
const listint_t *tmp;

if (head == NULL)
{
exit(98);
}

loop_found = loop(head);

if (loop_found == 1)
{
count = count_nodes_till_loop(head);
for (loop_found = 0; loop_found < count; loop_found++)
{
printf("[%p] %d\n", (void *)tmp, tmp->n);
num_nodes += 1;
tmp = tmp->next;
}
}
else if (loop_found == 0)
{
tmp = head;
while (tmp != NULL)
{
printf("[%p] %d\n", (void *)tmp, tmp->n);
num_nodes += 1;
tmp = tmp->next;
}
}
return (num_nodes);
}
