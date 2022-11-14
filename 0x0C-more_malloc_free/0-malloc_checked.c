#include "main.h"

/**
 * malloc_checked - the main function
 * @b: a parameter
 * Return: a pointer to allocated memory and return 98 if malloc failes
 */
void *malloc_checked(unsigned int b)
{
	int *tab;

	tab = malloc(sizeof(int));
	if (tab == NULL)
	{
		_putchar(98);
	}
}
