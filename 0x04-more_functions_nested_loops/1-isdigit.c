#include "main.h"

/**
 * _isdigit - checks for alowercase character
 * @c: digit to be checked
 * Retur: 1 if c is uppercase
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
