#include "search_algos.h"

/**
 * interpolation_search - searches for element using interpolation search algo
 * @array: pointer to the first element of the array
 * @size: number of elements in an array
 * @value: value to search for
 * Description: searches element using interpolation search algorithm
 * Return: -1 if value doesn't exist
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t pos;

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				return low;
			}
			return -1;
		}
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (array[pos] == value)
		{
			return pos;
		}
		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	return -1;
}
