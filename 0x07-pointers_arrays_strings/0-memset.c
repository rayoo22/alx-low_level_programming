#include "main.h"
/**
 * _memset - main function
 * @s: pointer of the memory location where the memory will be set
 * @b: value that is to be copied to the memory block
 * @n: number of bytes in the memory block which is set
 * Description:
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
