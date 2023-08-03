#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: number to check if is a prime number
 * Return: 0
 */
int is_prime_number(int n)
{
	int i;
	int count;

	i = 1;
	count = 0;

	if ((n % i) == 0)
	{
		count += 1;
	}

	if (count > 2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
