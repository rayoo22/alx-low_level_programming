#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: where the range starts from
 * @max: end of the range
 * Return: pointer to the newly creates array
 * if min > max return NULL, if malloc fails return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i] = min++;

	return (ptr);
}
