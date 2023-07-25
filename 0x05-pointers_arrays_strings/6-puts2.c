#include "main.h"
/**
 * puts2 - main entry point
 * @str: variable in use
 * Description: prints every other character in a string
 */
void puts2(char *str)
{
	int i;
	int t;
	char *y;
	int j;

	i = 0;
	t = 0;
	*y = str;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (j = 0; j <= t; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
