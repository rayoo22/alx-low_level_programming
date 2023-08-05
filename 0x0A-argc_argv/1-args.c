#include "main.h"
/**
 * main - print no. of argumnetspassed to prog
 * @argc: no of arguments
 * @argv: array of aruments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
