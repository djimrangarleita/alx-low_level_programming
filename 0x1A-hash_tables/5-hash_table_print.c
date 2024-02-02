#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int should_append = 0;

	if (!ht || !ht->array)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			print_list(ht->array[i], &should_append);
		}
	}
	printf("}\n");
}

/**
 * print_list - print the chained part of the hash table
 * @hn: hash node head ptr
 * @should_append: ptr to int, test if next print is to be appended
 * Return: nothing
 */
void print_list(hash_node_t *hn, int *should_append)
{
	while (hn)
	{
		if (*should_append)
			printf(", ");
		printf("'%s': '%s'", hn->key, hn->value);
		hn = hn->next;
		*should_append = 1;
	}
}
