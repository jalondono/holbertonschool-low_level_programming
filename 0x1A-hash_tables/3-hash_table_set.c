#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table that is being updated
 * @key: hash table key, can't be an empty string
 * @value: value associated with the key, which can be an empty string
 * Return: 1 if sucess, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newNode;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	/* find index */
	index = key_index((const unsigned char *)key, ht->size);
	/* go through hash table and linked lists */
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		/* check if key already exists, if so replace it */
		if (strcmp(key, ptr->key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}
	/* allocate newNode */
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	/* initialize new node */
	newNode->value = strdup(value);
	newNode->key = strdup(key);
	newNode->next = NULL;
	/* empty bucket */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
		return (1);
	}
	/* add new node in front of existing linked list */
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
