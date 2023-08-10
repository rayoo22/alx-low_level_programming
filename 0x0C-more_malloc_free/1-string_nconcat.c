#include "main.h"
/**
 * string_nconcat - concatenates 2 strings
 * @s: first string
 * @s2: second string
 * @n: my nigaa
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int j;

	n = 0;
	
	while (s1[n] != '\0')
	{
		++n;
	}

	for (j = 0; s2[j] != '\0'; ++j, length)
	{
		s1[n] = s1[j];
	}

	s1[n] = '\0';

	puts(s1);

	return (0);
}
