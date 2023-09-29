#include "main.h"
/**
 * find_root - finds sqrt, starting with the smallest no. possible
 * @n: variable
 * @root: root
 * Return: natural square root
 */
int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - natural sqrt of a number
 * @n: number to find its sqrt
 * Return: natuaral square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
