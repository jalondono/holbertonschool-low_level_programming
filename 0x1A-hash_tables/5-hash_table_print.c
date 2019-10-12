#include "hash_tables.h"
/**
* hash_table_print - print hashes
* @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long cont = 0, index_array;

	if (ht)
	{
		printf("{");
		for (index_array = 0; index_array < ht->size;
		     index_array++)
		{
			tmp = ht->array[index_array];
			if (!tmp)
			{
				continue;
			}
			while (tmp)
			{
				if (cont != 0)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				cont++;
			}
		}
		printf("}\n");
	}
}
