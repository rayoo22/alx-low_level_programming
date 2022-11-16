#include "main.h"

/**
 * more_numbers - function to be called
 * @n: first member
 * @m: second member
 *
 */
void more_numbers(void)
{
	int n = 0, m;

	while (n <= 10)
	{
		m = 0;
		while (m <= 14)
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
