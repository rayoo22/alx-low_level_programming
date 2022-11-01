#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - the main function.
 * @s: this is a pointer.
 * @c: this is the character variable.
 *
 * Return: string character.
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);

	return (ret);
}
