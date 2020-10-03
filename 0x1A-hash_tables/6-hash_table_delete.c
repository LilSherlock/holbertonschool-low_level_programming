#include "hash_tables.h"
/**
 * hash_table_delete - main
 * @ht: hash_table_t
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int long x = 0;
	hash_node_t *tmp = NULL, *aux = NULL;

	if (ht == NULL)
	{
		return;
	}
	for (x = 0; x < ht->size; x++)
	{
		tmp = ht->array[x];
		while (tmp)
		{
			aux = tmp;
			tmp = tmp->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
