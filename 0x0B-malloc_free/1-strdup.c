#include <stdlib.h>
#include "main.h"

/**
 * _strdup -returns a pointer to the space allocated
 * containing the copy of the string given
 * @str: string to be duplicated
 * Return: a pointer to the mem location where the duplicate is stored
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i = 0;
	int len = 0;

	if (str == NULL) /* validate str input */
	{
		return (NULL);
	}

	while (*(str + 1))
	{
		len++. i++;
	}
	len++;

	dup_str = malloc(sizeof(char) * len);

	if (dup_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(dup_str + i) = *(str + i);
		i++;
	}

	return (dup_str);
}
