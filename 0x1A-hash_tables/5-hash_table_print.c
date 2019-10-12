#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: size of
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *Tempnode;
	int count = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i  = 0; i < ht->size; i++)
	{
		Tempnode = ht->array[i];
		if (Tempnode == NULL)
			continue;
		while (Tempnode != NULL)
		{
			if (count != 0)
				printf(", ");
			printf("'%s': '%s'", Tempnode->key, Tempnode->value);
			Tempnode = Tempnode->next;
			count++;
		}
	}
	printf("}\n");
}
