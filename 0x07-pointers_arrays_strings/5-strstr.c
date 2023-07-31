#include "main.h"
/**
 * _strstr - main entry point
 * @haystack: string to be scanned
 * @needle: small string to be searched in the string haystack
 * Return: pointer to the first occurrence in haystack of needle
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
