#include "main.h"
/**
 * _strspn - main function
 * @s: string to be scanned
 * @accept: string containing list of characters to match in s
 * Return: gets the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
