#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - this is the main function
 * @a: This is a pointer
 * @n: this represents integer elements in an array
 *
 * Return: 0.
 */

void print_array(int *a, int n)
{
	int i;

	for(i = 0; i <= (n - 1); i++)
		printf("%d, ", a[i]);
		
	if (i == n - 1)
	{
		printf("%d", a[n - 1);
	}

	printf("\n");
}
