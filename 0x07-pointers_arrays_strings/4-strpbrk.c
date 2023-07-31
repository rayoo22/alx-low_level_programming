#include "main.h"
/**
 * _strpbrk - main entry point
 * @s: string to be scanned
 * @accept: string containing characters to be matched
 * Return:  searches a string for any of a set of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
