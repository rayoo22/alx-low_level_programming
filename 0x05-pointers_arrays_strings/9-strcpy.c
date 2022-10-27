#include <stdio.h>
#include "main.h"

/**
 * _strcpy - main function.
 * @src: source.
 * @dest: destination.
 *
 * Description: This function copies the string pointed to by src
 * 
 * Return: the pointer to the dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
