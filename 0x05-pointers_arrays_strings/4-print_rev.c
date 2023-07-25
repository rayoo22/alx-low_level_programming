#include "main.h"
/**
 * print_rev - main entry point
 * @s: variable in use
 * Description: prints a string, in reverse, followed by a new line
 */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
