#include "main.h"
/**
 * _strncpy - main entry point
 * @dest: destination variable
 * @src: source variable
 * @n: number of bytes
 * Description: copies a string
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
