#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to previously allocated mem with a call to malloc
 * @old_size: size of allocates space for ptr
 * @new_size: bytes of the new memory block
 * Return: pointer to the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (pr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		*((char *)p + 1) = *((char *)ptr + i);
	}
	free(ptr);

	return (p);
}
