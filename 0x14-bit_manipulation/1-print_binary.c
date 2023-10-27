#include "main.h"

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
*/
void print_binary(unsigned long int n)
{
unsigned long int copy_n = n, mask = 1;
int len = 0;

while (copy_n > 0)
{
len++;
copy_n >>= 1;
}
len -= 1;

if (len > 0)
{
mask = mask << len;
}

while (mask > 0)
{
if (n & mask)
{
_putchar('1');
}
else
{
_putchar('0');
}
mask >>= 1;
}
