#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - the main code.
 * @s: this is a pointer.
 * @accept: string containing list of characters.
 *
 * Return: number of bytes in the initial segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);

	return (n);
}
