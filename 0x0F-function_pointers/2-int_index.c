#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array in use
 * @size: size of the array
 * @cmp: pointer to searching function
 * Return: index where integer's found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

/* iterate through array and call searching function*/
for (i = 0; i < size; i++)
if (cmp(*(array + i)))
return (i);

return (-1);
}