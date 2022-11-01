#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - main function.
 * @s: this is a pointer.
 * @b: a characer.
 * @n: This is the number of bytes to be set to the value.
 *
 *
 * Return: 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
