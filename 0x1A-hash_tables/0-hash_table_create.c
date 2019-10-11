#include "hash_tables.h"
/**
 * hash_table_create - allocate memory to hashtable
 *@size: size of memory allocation
 * Return: a pointer to memory allocation
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	int i = 0;

	if (size == 0)
		return (NULL);
	hashtable = malloc(sizeof(hashtable) * 1);
	if (hashtable == NULL)
		return (NULL);
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	for (i = 0; i < 1024; ++i)
		hashtable->array[i] = NULL;
	return (hashtable);
}
