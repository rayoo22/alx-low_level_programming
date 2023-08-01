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
	int s = size * size;

	sum1 = 0;
	sum2 = 0

	for (i = 0; i < s; i += size + 1)
	{
		sum1 += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
