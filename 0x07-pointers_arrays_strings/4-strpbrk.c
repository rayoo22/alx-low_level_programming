#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - the main function.
 * @s: the pointer
 * @accept: string in which occurrences are searched for.
 *
 * Return: a pointer to the byte that matches.
 */

char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);

	return (ret);
}
