#include "main.h"
/**
 * print_sign - entry point
 * @n: number to check its sign
 * Description: prints the sign of a number
 * Return: 1 if > 0, 0 if == 0, -1 if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
