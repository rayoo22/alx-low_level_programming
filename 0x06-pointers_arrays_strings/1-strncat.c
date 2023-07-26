#include "main.h"
/**
 * _strncat - main entry point
 * @dest: destination varable
 * @src: source variable
 * @n: bytes to be used
 * Description: concatenates two strings.
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
}
