#include "main.h"

int actual_sqrt_recurs(int n, int i);

/**
 * _sqrt_recursion - natural square root of a number.
 * @n: number to undergo square root
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recurs(n, 0));
}

/**
 * actual_sqrt_recurs - recurses to find the natural sqrt number
 * @n: number to get its square root
 * @i: the iterator
 * Return: the resulting square root
 */
int actual_sqrt_recurs(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recurs(n, i + 1));
}
