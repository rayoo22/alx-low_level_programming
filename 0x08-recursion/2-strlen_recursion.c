#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - the main function
 * @s: this is a pointer to a string variable
 *
 * Return: 0.
 */
int _strlen_recursion(char *s)
{
	int len;

	len = strlen(s);

	_putchar(len);

	return (0);
}
