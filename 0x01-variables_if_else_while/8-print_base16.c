#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar(1 + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10);

	return (0);
}
