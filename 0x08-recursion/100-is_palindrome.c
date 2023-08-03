#include "main.h"

/**
 * _strlen_recursion - finds length of a string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome_recursive - checks 2 chars of a string are equal
 * @s: string to be evaluated
 * @i: indexx 1
 * @j: last index
 * Return: 1 if equal, else 0
 */
int is_palindrome_recursive(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == j - 1)
		return (s[i] != s[j]);
	if (s[i] != s [j])
		return (0);
	return (is_palindrome_recursive(s, i + 1, j - 1));
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len == 0 || *s != s[len - 1])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, 0, len - 1));
}
