#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - get an elt in the ht
 * @ht: ptr to the hash table where to get elt
 * @key: key of the elt to get
 * Return: ptr to elt (value)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	else
		return (get_value_from_chaine(ht->array[index], key));
}

/**
 * get_value_from_chaine - lookup linked list and return val if key exist
 * @hn: hash_node ptr
 * @key: key to lookup
 * Return: value or null
 */
char *get_value_from_chaine(const hash_node_t *hn, const char *key)
{
	while (hn != NULL)
	{
		if (strcmp(hn->key, key) == 0)
			return (hn->value);
		hn = hn->next;
	}

	return (NULL);
}
