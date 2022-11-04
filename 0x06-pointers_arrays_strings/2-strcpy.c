#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - the main function
 * @dest: a pointer to a character variable
 * @src: a pointer to a character variable
 * @n: a variable
 * Return: a char variable
 */

char *_strcpy(char *dest, char *src, int n)
{
	strcpy(dest, src);

	return (dest);
}
