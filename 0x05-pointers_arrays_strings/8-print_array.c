#include "main.h"
#include <stdio.h>

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

	int len = strlen(a[]);

	for(i = 0; i <= len; i++)
		printf("%d, ", a[i]);

	printf("\n");
}
