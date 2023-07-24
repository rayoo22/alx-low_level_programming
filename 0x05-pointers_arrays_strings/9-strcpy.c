#include "main.h"
/**
 * _strcpy - entry point
 * @dest: variable in use
 * @src: variable in use
 * Destination: copies string pointed by src to dest including null byte
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
