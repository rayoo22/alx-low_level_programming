#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - the main code.
 * @dest: this is a pointer.
 * @src: this is a variable.
 * @n: this is the size of memory allocated.
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
