#include "main.h"

int the_prime(int n, int i);

/**
 * is_prime_number - evaluates to check if input is prime
 * @n: number to check if is a prime number
 * Return: 1 if int is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (the_prime(n, n - 1));
}

/**
 * the_prime - calculates if a number is prime, recursively
 * @n: number to calculate
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int the_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}

	return (the_prime(n, i - 1));
}
