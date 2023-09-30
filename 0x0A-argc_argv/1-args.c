#include <stdio.h>

/**
 * main - prints number of arguments passed to the program
 * @argc: argument counter
 * @argv:array of the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
