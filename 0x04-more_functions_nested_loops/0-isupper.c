#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <=  'z')
	{
		return (0);
	}
	else
	{
		return (0);
	}

}
