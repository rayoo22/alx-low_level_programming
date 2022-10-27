#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - This is the main function.
 * @dest: a pointer
 * @src: a pointer
 *
 * Description: This function should print the concatenation of two strings.
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);
	printf("%s", ptr);

	return (dest);
}
