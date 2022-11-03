#include "main.h"

/**
 * factorial - the main function
 * @n: a variable for the function
 *
 * Return -1 if less than 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	_putchar(factorial(n - 1) + factorial(n - 2));

	return (0);
}
