#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the number of compiled arguments
 * @argv: array of compiled arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int add;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
