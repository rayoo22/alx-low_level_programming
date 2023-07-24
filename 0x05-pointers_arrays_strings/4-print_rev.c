#include "main.h"
/**
 * print_rev - main entry point
 * @s: variable in use
 * Description: prints a string, in reverse, followed by a new line
 */
void print_rev(char *s)
{
	int i, len, temp;
	len = strlen(s);

	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
