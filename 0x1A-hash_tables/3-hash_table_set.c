#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - set an elt to the hash table/node
 * @ht: ptr to the hash table
 * @key: key of the elt to be set
 * @value: value of the elt
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *hash_node;
	hash_node_t *to_override;

	if (!ht || !key || !*key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = create_hash_node(key, value);
		if (ht->array[index] == NULL)
			return (0);
		return (1);
	}
	else
	{
		/* collision create or override */
		to_override = check_node_in_chaine(ht->array[index], key);
		if (to_override)
			return (override_val(to_override, value));
		hash_node = create_hash_node(key, value);
		if (hash_node == NULL)
			return (0);
		hash_node->next = ht->array[index];
		ht->array[index] = hash_node;
		return (1);
	}

	return (0);
}

/**
 * create_hash_node - create a new hash node with key val pair
 * @key: key of the elt
 * @value: value of the elt
 * Return: ptr to the created node
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = NULL;
	new_node->next = NULL;
	if (value)
		new_node->value = strdup(value);

	return (new_node);
}

/**
 * override_val - override a value for existing keys
 * @hn: hash node
 * @value: new val
 * Return: always return 1
 */
int override_val(hash_node_t *hn, const char *value)
{
	free(hn->value);
	hn->value = NULL;
	if (value)
		hn->value = strdup(value);

	return (1);
}

/**
 * check_node_in_chaine - check if key exist in collided nodes
 * @key: ptr to key to check in chaine
 * @hn: ptr to the head of node where to check key
 * Return: ptr to node that contains key or NULL
 */
hash_node_t *check_node_in_chaine(hash_node_t *hn, const char *key)
{
	while (hn)
	{
		if (strcmp(hn->key, key) == 0)
			return (hn);
		hn = hn->next;
	}

	return (NULL);
}
