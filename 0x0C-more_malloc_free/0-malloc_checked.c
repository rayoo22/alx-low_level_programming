#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: variable in use
 * Returns: if malloc fails, nrmal process termination
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));

	if (ptr != NULL)
	{
		return (ptr);
	}
	
	exit(98);
}
