#include "main.h"
#include <stdio.h>

/**
 * factorial - the main function
 * @n: a variable for the function
 *
 * Return: -1 if less than 0.
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

	else if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
