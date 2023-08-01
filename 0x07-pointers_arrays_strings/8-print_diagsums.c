#include "main.h"
/**
 * print_diagsums - main entry point
 * @a: array
 * @size: square size
 * Description: prints the sum of diagonal elements in a square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + y];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
