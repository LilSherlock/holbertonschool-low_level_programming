#include "hash_tables.h"
/**
 * hash_table_create - main
 * @size: long int
 * Return: ht
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}
	ht->size = size;
	return (ht);
}
