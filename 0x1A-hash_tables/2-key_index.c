#include "hash_tables.h"
/**
 * key_index-  hash function
 * @size: size of
 *@key: key
 * Return: a randomly number of index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2((unsigned char *)key) % size;
	return (index);
}
