#include <stddef.h>
/* defines size_t */

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 * @array: an array
 * @size: size of the array
 * @action: pointer to the function that we need to execute
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(*(array + i));
}
}
}