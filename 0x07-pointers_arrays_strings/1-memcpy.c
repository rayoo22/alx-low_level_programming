#include "main.h"
/**
 * _memcpy - copies characters from memory area to another memory area
 * @dest: the final copied memory area
 * @src: the memory area to be copied
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
