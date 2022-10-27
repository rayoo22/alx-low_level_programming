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
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for ( ; x < l ; x++)
		dest[x] = src[x];

	dest[l] = '\0';

	return (dest);
}
