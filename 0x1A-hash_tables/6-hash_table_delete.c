#include "hash_tables.h"
/**
 * hash_table_delete - print a hash table
 * @ht: size of
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *Tempnode;
	hash_node_t *aux;

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
			free(Tempnode->value);
			free(Tempnode->key);
			aux = Tempnode->next;
			free(Tempnode);
			Tempnode = aux;
		}
	}
	free(ht->array);
	free(ht);
}
