#include "main.h"
/**
 * factorial - computes factorial of a given number
 * @n: number to compute factorial
 * Return: -1 if n < 0, 1 if n = 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
