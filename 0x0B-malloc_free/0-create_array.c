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
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0|| str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
