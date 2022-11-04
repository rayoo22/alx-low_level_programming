#include "main.h"

/**
 * _print_rev_recursion - the main function
 * @s: pointer to a string variable
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
