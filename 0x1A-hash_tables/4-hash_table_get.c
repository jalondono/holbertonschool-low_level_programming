#include "hash_tables.h"
#include <string.h>
/**
* hash_table_get - gets the function that retrieves a value
* @ht: the hash table I want to look
* @key: the keys I'm looking for
* Return: the value associated
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;
	
	if (ht == NULL || key == NULL)
		return (NULL);
	
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
