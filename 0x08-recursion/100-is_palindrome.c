#include "main.h"
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len;
	int index;
	
	index = 0;

	len = strlen(s) - (index + 1);

	if (s[index] == s[len])
	{
		if (index + 1 ==len || index == len)
		{
			return (1);
		}
		is_palindrome(s);
	}
	
	return (0);
}
