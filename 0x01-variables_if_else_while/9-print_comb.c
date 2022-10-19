#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
if (i != '9')
{
(int) putchar(i);
putchar(',');
putchar(' ');
}
else if (i == '9')
{
putchar(i);
putchar('\n');
break;
}
}
return (0);
}
