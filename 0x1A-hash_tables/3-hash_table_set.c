#include "hash_tables.h"
/**
 * hash_table_set - main
 * @ht: hash
 * @key: const char
 * @value: const char
 * Return: 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned int index = 0;

	if (!key || !ht || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
