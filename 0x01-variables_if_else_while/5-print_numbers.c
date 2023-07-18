#include <stdio.h>
/*
 * main - Entry point
 * Description: prints single digit numbers
 * Return: 0
 */
int main(void)
{
	int num;

	num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
