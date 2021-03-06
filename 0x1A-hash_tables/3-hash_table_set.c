#include "hash_tables.h"
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
	hash_node_t *tempnode;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tempnode = ht->array[index];
	while (tempnode != NULL)
	{
		if (strcmp(key, tempnode->key) == 0)
		{
			free(tempnode->value);
			tempnode->value = strdup(value);
			return (1);
		}
		tempnode = tempnode->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->value = strdup(value);
	newnode->key = strdup(key);
	newnode->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
		return (1);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
