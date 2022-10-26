#include "main.h"

/**
 * _strlen - main function.
 * @s: Pointer with an address value.
 * Description: This function takes a pointer to an int as parameter and
 * updates the value it points to 98.
 *
 * Return: none.
 */

int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
