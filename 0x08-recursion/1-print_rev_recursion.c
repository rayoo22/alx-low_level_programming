#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _puts_rev_recursion - the main function
 * @s: pointer to a string variable
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	puts(strrev(s));
}
