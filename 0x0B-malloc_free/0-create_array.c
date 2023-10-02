#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array, initializes with a specific char
 * @size: size of the array
 * @c: char values to fill the array
 * Return: pointer to the array (the array itself)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0) /* validate size of input */
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size); /* allocate memory */

	if (arr == NULL) /* VALIDATE MEMORY */
		return (NULL);

	while (i < (int)size) /* set array values to char c */
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';

	return (arr);
}
