#include "main.h"
/**
 * swap_int - main entry point
 * @a: variable in use
 * @b: variable in use
 * Description: function that swaps the values of two integers
 */
void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
