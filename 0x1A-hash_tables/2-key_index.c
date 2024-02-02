#include "hash_tables.h"

/**
 * key_index - return the index given a key and a size of ht
 * @size: size of the hash table
 * @key: the key to hash
 * Return: index of an elt
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
