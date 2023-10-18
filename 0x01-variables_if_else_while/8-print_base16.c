#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
int n = '0';
int a_to_f = 'a';

while (n <= '9')
{
putchar(n)
n++;
}

while (a_to_f <= 'f')
{
putchar(a_to_f);
a_to_f++;
}
putchar('\n');

return (0);
}
