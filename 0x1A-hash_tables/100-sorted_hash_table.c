#include <stdlib.h>
#include "hash_tables.h"

/**
 * shash_table_create - create hash table
 * @size: size of the table to be created
 * Return: ptr to the created table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	return (NULL);
}

/**
 * shash_table_set - set key value pair to hash table
 * @ht: ptr to hash table
 * @key: key of the the elt to set
 * @value: ptr to value to be added to the hash table
 * Return: 1 if success or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	return (1);
}

/**
 * shash_table_get - get an elt from a hash table given a @key
 * @ht: hash table to get the elt from
 * @key: key of the elt to get
 * Return: char ptr to the value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	return (NULL);
}

/**
 * shash_table_print_rev - print the hash table in reverse order
 * @ht: hash table to print
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{}

/**
 * shash_table_delete - delete the hash table
 * @ht: hash table ptr
 * Return: nothing
 */
void shash_table_delete(const shash_table_t *ht)
{}
