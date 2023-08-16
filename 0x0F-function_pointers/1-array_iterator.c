#include "function_poiners.h"
/**
 * array_iterator - function that executes a function on each element
 * @array: arr of elements to be acted upon
 * @size: size of the array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	action = &array_iterator;


}
