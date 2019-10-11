#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - function to add a item in a hash table
 * @ht: hash table
 *@key: key
 * @value: value to storage
 * Return: 1 if all went good
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newnode;

	if (ht == NULL)
		return (0);
	if  (key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = newnode;
	else
	{
		newnode->next = ht->array[index];
		ht->array[index]->next = NULL;
		ht->array[index] = newnode;
	}
	return (1);
}
