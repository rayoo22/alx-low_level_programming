#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all parameters
 * @n: constant argument for the function
 * Return: if n == 0, return 0, otherwise, return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list ptr;

	va_start(ptr, n);

	for (int i = 0; i < n; i++)
	{
		sum += var_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
