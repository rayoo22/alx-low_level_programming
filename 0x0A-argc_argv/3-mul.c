#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the number of arguments.
 * @argv: array of compiled arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
