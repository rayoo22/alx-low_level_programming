#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase ten times
 * Desription: prints alphabet 10 times in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	int rounds = 0;

	while (rounds < 10)
	{
		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		rounds++;
	}

}
