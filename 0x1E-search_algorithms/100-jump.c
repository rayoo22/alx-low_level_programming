#include "search_algos.h"

/**
 * jump_search - uses jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: element to be searched for
 * Description: uses jump search algorithm to search for the element
 * Return: first index where value is located, -1 if value doesn't exist
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t start;
	size_t end;

	start = 0;
	end = sqrt(size);

	while (array[end] < value && start < size)
	{
		start = end;
		end = end + sqrt(size);

		if (end > size - 1)
		{
			end = size;
		}
	}
	for (i = start; i < end; i++)
	{
		if (array[i] == value)
		{
			return i;
		}
	}
	return -1;
}
