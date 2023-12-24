#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: key to be hashed
 * @size: size of the array
 * Return: index of the day
 */
unsigned long intkey_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
