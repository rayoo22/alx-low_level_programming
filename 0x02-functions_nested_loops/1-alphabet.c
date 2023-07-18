#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabet in lowercase, then new line
 * Return: 0
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
