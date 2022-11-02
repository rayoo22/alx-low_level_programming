#include "main.h"
#include <ctype.h>

/**
 * _isalpha - the main function.
 * @c: a variable.
 *
 * Return: 1 if lowercase, 0 if otherwise.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
