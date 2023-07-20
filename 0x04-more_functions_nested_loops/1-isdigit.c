#include "main.h"
/**
 * _isdigit - entry point
 * @c: variable to be used
 * Description: checks for a digit
 * Return: 1 if digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
