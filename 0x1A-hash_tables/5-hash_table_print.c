#include "hash_tables.h"
/**
 * hash_table_print - main
 * @ht: hash_table_t
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int y = 0, x;
	hash_node_t *keys;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		keys = ht->array[x];
		while (keys)
		{
			if (y > 0)
				printf(", ");
			printf("'%s': '%s'", keys->key, keys->value);
			keys = keys->next;
			y++;
		}
	}
	printf("}\n");
}
