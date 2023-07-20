#include "main.h"
/**
 * print_most_numbers - entry point
 * Description: prints 0 to 9, skips 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char i;

	i = '0';

	while (i <= '9')
	{
		if (i == '2' ||  i == '4')
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
