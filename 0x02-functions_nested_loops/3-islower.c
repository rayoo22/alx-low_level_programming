#include "main.h"
#include <ctype.h>

/**
 * _islower - the main function
 * @c: a variable
 *
 * Return: 1 if lowercase, 0 if otherwise.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
