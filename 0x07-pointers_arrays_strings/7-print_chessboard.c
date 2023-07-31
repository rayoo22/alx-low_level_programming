#include "main.h"
/**
 * print_chessboard - main entry point
 * @a: character pointer of array size 8
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i; 
	int j;

	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
