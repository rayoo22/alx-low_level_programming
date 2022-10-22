#include "main.h"

/**
 * _isupper - checks for lowercase characters.
 *@c: caracter recibo por main
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
