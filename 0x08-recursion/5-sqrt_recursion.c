#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - the main function
 * @n: function param
 *
 * Return: -1.
 */
int _sqrt_recursion(int n)
{
	double m;

	m = (double) n;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	printf("%ld", sqrt(m));

	return (0);
}
