#include "main.h"
/**
 * print_array - main entry point
 * @a: variable in use
 * @n: variable in use
 * Description:  prints n elements of an array of integers
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}

	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
