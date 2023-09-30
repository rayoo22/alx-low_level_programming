#include <stdio.h>

/**
 * main - prints name of the program
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
