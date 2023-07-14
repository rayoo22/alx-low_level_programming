#include <stdio.h>
/**
 * main - program prints size of data types
 * Return: 0
 */
int main(void)
{
	char i;
	int j;
	long int a;
	long long int b;
	float c;

	printf("Size of char: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of int: %lu byte(s)\n", (unsigned long) sizeof(j));
	printf("Size of long int: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of float: %lu byte(s)\n", (unsigned long) sizeof(c));

	return (0);
}
