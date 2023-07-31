#include "main.h"
/**
 * _memset - main function
 * @s:
 * @b:
 * @n:
 * Description:
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
