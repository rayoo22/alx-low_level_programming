#include "main.h"

/**
 * rev_string - main function.
 * @s: Pointer, the string to print.
 *
 * Description: This function reverses the string.
 *
 * Return: none.
 */

void rev_string(char *s)
{
int f = 0;
int b = 0;
int z = 0;

while (s[b])
{
b++;
}

b = b - 1;

while (f < b + 1 / 2)
{
z = s[f];
s[f] = s[b];
s[b] = z;

b--;
f++;
}
}
