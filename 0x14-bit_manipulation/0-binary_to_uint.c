#include "main.h"

/**
 * binary_to_uint - the main function
 * @b: pointer to variable
 * Return: converted number of 0 if that is not 0 or 1 and if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{	
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i]-'0';
		i++;
	}

	return (val);
}
