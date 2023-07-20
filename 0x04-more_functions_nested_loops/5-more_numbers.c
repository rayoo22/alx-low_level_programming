#include "main.h"
/**
 * more_numbers - entry point
 * Description: prints 10 times the numbers, from 0 to 14, followed by a new line
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	char j;
	int length;

	length = 14;

	for (i = 0; i <= 10; i++)
	{
		for (j = '0'; j <= length + '0'; j++)
		{
			_putchar(j);		
		}
		_putchar('\n');
	}
}
