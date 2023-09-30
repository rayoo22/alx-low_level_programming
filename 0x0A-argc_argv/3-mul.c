#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of argument numbers
 * @argc: argument cunter
 * @argv: array of arguments passed
 * Return: 0 in success, 1 if two arguments are not given
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
