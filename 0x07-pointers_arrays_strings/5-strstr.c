#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - the main function.
 * @haystack: a pointer.
 * @needle: another pointer.
 *
 * Return: it returns a pointer to the beginning of the located.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);

	return (ret);
}
