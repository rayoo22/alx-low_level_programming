#include <stdio.h>
/**
 * main - Entry point
 * Description: prints letters of the alphabet
 * Return: 0
 */
int main(void)
{
	int letter = 97;

	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);

	return (0);
}
