#include "hash_tables.h"
/**
 * key_index - main
 * @key: unsigned char
 * @size: long int
 * Return: hash
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);
	hash = hash_djb2(key);
	hash = hash % size;

	return (hash);
}
