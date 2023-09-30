#include <stdio.h>

/**
 * main - print each argument passed into to the program line
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}

	return (0);
}
