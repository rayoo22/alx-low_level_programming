#include <stdio.h>
/**
 * main - Entry piont
 * Description: print double digit numbers
 * Return: 0
 */
int main(void)
{
int ones, tens;

for (tens = '0'; tens <= '9'; tens++)
{
for (ones = (tens + 1); ones <= '9'; ones++)
{
putchar(tens);
putchar(ones);

if (tens != '8' || ones != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
