#include "search_algos.h"

/**
 * exponential_search - uses exponential search to find element
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Description: uses exponential search to find element
 * Return: -1 if element is not in the array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, m, low, high, mid;

	i = 1;
	low = 0;
	high = size - 1;
	m = pow(2, i);

	if (array[0] == value)
	{
		return 0;
	}

	while (array[m] <= value && m < size)
	{
		i++;
		m = pow(2, i);
		while (low <= high)
		{
			mid = (low + high) / 2;
			
			if (array[mid] == value)
			{
				return mid;
			}
			else if (array[mid] < value)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
	}
	return -1;
}
