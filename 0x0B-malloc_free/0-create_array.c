#include "main.h"
/**
 * create_array - creates an arr of chars, initializing with a char
 * @size: size of the array
 * @c: initializer
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	
	p = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}

	if (p != NULL)
	{
		return (p);
	}
	else
	{
		return (NULL);
	}
}
