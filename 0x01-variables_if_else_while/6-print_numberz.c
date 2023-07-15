#include <stdio.h>
/**
 * main - Entry point
 * Description: print single digit numbers of base 10 starting 0.
 * Return: 0
 */
int main (void)
{
	int a;

	a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar(10);

	return (0);
}
