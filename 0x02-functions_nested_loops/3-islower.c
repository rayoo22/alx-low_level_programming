#include "main.h"
/**
 * _islower - entry point
 * Description: check for lowercase character
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
