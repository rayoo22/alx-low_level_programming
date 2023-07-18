#include "main.h"
/**
 * _isalpha - entry point
 * @c: character to check
 * Description: checks for alphabetic character
 * Return: 1 if is letter, lower or upper, 0 if otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
