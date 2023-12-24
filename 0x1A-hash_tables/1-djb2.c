#include "hash_tables.h"

/**
 * hash_djb2 - implementing djb2 algorithm
 * @str: value
 * Return: key
 */
unsigned long int hash_djb2(const insigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
