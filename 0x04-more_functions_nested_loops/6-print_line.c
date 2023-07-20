#include "main.h"
/**
 * print_line - main entry
 * @n: variable in use
 * Descriptions: draws a straight line in terminal
 * Return: 0
 */
void print_line(int n)
{
	int i;
	
	i = 1;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
