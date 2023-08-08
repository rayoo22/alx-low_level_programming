#include "main.h"
/**
 * _strdup - returns a pointer to a new memory
 * @str: variable
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *result;
	
	result = malloc(sizeof(str));
	result = strdup(str);

	if (str == NULL)
	{
		return (NULL);
	}

	return (result);
}
