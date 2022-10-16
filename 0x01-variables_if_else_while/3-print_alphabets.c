#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
	printf("%c", c);
for (c = 'A'; c <= 'Z'; ++c)
	printf("%c", c);
printf("\n");
return (0);
}
