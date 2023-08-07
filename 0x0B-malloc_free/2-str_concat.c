#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: return NULL on failur
 */
char *str_concat(char *s1, char *s2)
{
	char *sol;

	sol = malloc(sizeof(s1) + sizeof(s2));

	strcat(s1, s2);

	s1 = sol;

	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}
	
	if (s1)
	{
		return (s1);
	}
	else
		return (NULL);
}
