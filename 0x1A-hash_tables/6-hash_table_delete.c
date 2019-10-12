
#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash
*@ht: where the hash is.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	hash_node_t *delete;
	unsigned long  int index_array;

	if (ht)
	{
		for (index_array = 0; index_array < ht->size; index_array++)
		{
			tmp = ht->array[index_array];
			while (tmp)
			{
				delete = tmp;
				free(delete->value);
				free(delete->key);
				free(delete);
				tmp = tmp->next;
			}
			free(tmp);
		}
		free(ht->array);
		free(ht);
	}
}
