#include "search_algos.h"

/**
 * linear_search - searches for element in a linear manner
 * @array: pointer to the first element of the arrayto search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size == 0 || !array)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}

		i++;
	}
	return (-1);
}
