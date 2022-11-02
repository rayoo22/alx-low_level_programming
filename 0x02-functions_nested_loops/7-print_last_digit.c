#include "main.h"
#include <string.h>

/**
 * print_last_digit - the main function.
 * @i: a vaariable to check.
 *
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	int n;

	for (n = 0; n <= strlen(i); n++)
	{
		if (n == strlen(i))
		{
			return (strlen(i));
		}
	}
	return (0);
}
