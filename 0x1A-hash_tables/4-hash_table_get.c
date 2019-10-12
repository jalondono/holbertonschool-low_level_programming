#include "hash_tables.h"
/**
 * hash_table_get - hash function
 * @ht: size of
 *@key: key
 * Return: a randomly number of index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *node;

	if (ht == NULL || strcmp("", key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
