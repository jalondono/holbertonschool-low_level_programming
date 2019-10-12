#include "hash_tables.h"
/**
 * hash_table_delete - print a hash table
 * @ht: size of
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *Tempnode;
	hash_node_t *aux;

	if (ht == NULL)
		return;
	printf("{");
	for (i  = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL) {
			Tempnode = ht->array[i];
			while (Tempnode != NULL) {
				aux = Tempnode;
				Tempnode = Tempnode->next;
				free(aux->value);
				free(aux->key);
				free(aux);
			}
		}
	}
	free(ht->array);
	free(ht);
}
