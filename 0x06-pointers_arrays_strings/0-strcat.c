#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - This is the main function.
 * @dest: a pointer
 * @src: a pointer
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
