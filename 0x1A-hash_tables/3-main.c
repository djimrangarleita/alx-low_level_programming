#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "mentioner", "I am a mentioner");
    hash_table_set(ht, "null_val", NULL);
    hash_table_set(ht, "hetairas", "I collided with mentioner");
    return (EXIT_SUCCESS);
}
