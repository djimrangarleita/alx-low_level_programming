#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			delete_chaine(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * delete_chaine - delete the chained part of the hash table
 * @hn: hash node head ptr
 * Return: nothing
 */
void delete_chaine(hash_node_t *hn)
{
	hash_node_t *tmp;

	while (hn)
	{
		tmp = hn;
		hn = hn->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}
