#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - the main function
 * @dest: a pointer
 * @src: a pointer
 * @n: the size
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
