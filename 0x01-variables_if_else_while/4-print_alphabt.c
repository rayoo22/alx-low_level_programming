#include <stdio.h>

/**
 * main - Entry point
 * Description: prints lettersexcept e and q
 * Return: 0
 */
int main(void)
{
	int lower = 'a';

	while (lower < 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');

	return (0);
}
