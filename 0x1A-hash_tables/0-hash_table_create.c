#include "hash_tables.h"
/**
 * hash_table_create - allocate memory to hashtable
 *@size: size of memory allocation
 * Return: a pointer to memory allocation
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;

	if (size == 0)
		return (NULL);
	hashtable = malloc(sizeof(struct hash_table_s) * 1);
	if (hashtable == NULL)
		return (NULL);
	hashtable->array = malloc(sizeof(hash_node_t) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	return (hashtable);
}
