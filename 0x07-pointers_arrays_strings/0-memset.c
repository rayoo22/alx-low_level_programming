#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - main function.
 * @s: this is a pointer.
 * @b: a characer.
 * @n: This is the number of bytes to be set to the value.
 *
 * Description: this code fills memory with a constant byte.
 *
 * Return: 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (0);
}
