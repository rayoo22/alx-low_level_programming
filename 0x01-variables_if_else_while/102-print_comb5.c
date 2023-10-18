#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of 2-digit numbers'
 * Return: 0
 */
int main(void)
{
int tens, ones, t, o;

for (tens = '0'; tens <= '9'; tens++)
{
for (ones = '0'; ones <= '9'; ones++)
{
for (t = tens; t <= '9'; t++)
{
for (o = ones + 1; o <= '9'; o++)
{
putchar(tens);
putchar(ones);
putchar(' ');
putchar(t);
putchar(o);

if (!((tens == '9' && ones == '8') && (t == '9' && o == '9')))
{
putchar(',');
putchar(' ');
}
}
o = '0';
}
}
}
putchar('\n');
return (0);
}
