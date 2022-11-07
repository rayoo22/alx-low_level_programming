#include <stdio.h>

/**
 * main - the main function
 * @argc: the number of complied arguments
 * @argv: array of compiled arguments
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
