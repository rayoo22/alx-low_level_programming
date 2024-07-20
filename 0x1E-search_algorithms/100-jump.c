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
	size_t i, jump, step;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	step = sqrt(size);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - i ? jump : size - 1;

	for (; i < jump && array[i] < value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
