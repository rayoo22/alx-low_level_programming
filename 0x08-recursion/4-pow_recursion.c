#include "main.h"
/**
 * _pow_recursion - return the value of x to the power of y
 * @x: value to find its result after power
 * @y: value to raise on x
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	double result;

	result = pow(x, y);

	return (result);
}
