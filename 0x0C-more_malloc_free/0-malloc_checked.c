#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - the main function
 * @b: a parameter
 * Return: a pointer to allocated memory and return 98 if malloc failes
 */
void *malloc_checked(unsigned int b)
{
	void *tab;

	tab = malloc(b);
	if (tab == NULL)
	{
		exit(98);
	}

	return (*tab);
}
