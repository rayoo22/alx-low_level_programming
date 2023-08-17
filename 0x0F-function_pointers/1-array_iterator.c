#include "function_pointers.h"
/**
 * array_iterator - function that executes a function on each element
 * @array: arr of elements to be acted upon
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}
