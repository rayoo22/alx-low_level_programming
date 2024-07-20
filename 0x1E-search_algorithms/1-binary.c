#include "search_algos.h"

/**
 * binary_search - searches for an element using binary search
 * @array: pointer to the first element of the array
 * @size: is the nu,ber of elements in array
 * @value: is the value to search for
 * Description: uses binary search to determine value to be searched
 * Return: -1 if value is not in array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t start;
	size_t end;

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = floor(start + end) / 2;

		if (array[mid] < value)
		{
			start = mid + 1;
			printf(
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
		else 
		{
			return mid;
		}
	}
	return(-1);
}
