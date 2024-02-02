#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table of size @size
 * @size: size of the hash table
 * Return: ptr to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));

	if(!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t));

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
