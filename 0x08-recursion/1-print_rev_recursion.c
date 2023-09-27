#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to reverse
 */
void _print_rev_recursion(char *s)
{
	if (!s)
	{
		return;
	}

	int i;
	int j;
	
	i = 0;	
	j = strlen(s) - 1;

	while (i < j)
	{
		char c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
