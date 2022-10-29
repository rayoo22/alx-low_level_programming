#include <stdio.h>

/**
 * reverse_array - writes the character c to standard output
 * @a: The character to br printed
 * @n: another
 * Return: On success 1.
 * on error, -1 is returned, and errno is set apropriately.
 */

void reverse_array( int *a, int n)
{
	int b = 0, c = 0;
	int d[20];

	n--;
	while (b <= n)
	{
		d[n - b] = a[b];
		b++;
	}

	while (c <= n)
	{
		a[c] = d[c];
		c++;
	}
	
}
