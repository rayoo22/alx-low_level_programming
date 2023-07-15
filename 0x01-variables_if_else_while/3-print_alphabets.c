#include <stdio.h>
/**
 * main - Entry point
 * Description: prints letters of the alphabet in lowercase then uppercase
 * Return: 0
 */
int main(void)
{
	int lower, upper;

	lower = 97;
	upper = 65;

	while (lower < 123)
	{
		putchar(lower);
		lower++;
	}

	while (upper < 91)
	{
		putchar(upper);
		upper++;
	}

	putchar(10);

	return (0);
}
