#include "main.h"
/**
 * times_table - entry point
 * Description: function that prints the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int num;
	int mul;
	int prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for(mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mul;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			_putchar((prod / 10) + '0');
		}
		_putchar('\n');
	}
}
