#include "main.h"
/**
 * print_numbers - entry point
 * Description: prints numbers from 0 to 9, then new line
 * Return: 0
 */
void print_numbers(void)
{
	char i;
	
	i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
