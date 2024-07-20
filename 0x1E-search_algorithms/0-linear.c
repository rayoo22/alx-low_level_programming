#include "search_algos.h"

/**
 * linear_search - searches for element in a linear manner
 * @array: pointer to the first element of the arrayto search in
 * @size: number of elements in array
 * @value: the value to search for
 * Description: if value is not in array OR array is NULL
 * function must return -1
 *
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (value == array[i])
		{
			return i;
		}
	}
	/* x is not found */
	return (-1);	
}
