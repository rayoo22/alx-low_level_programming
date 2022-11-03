#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _pow_recursion - the main function
 * @x: a param
 * @y: a param
 * Return: -1 if y is lower than zero
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
