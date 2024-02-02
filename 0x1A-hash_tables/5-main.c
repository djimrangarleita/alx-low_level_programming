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
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");
    hash_table_set(ht, "hetairas", "Test collision 1");
    hash_table_set(ht, "mentioner", "Test collision 2");
    hash_table_set(ht, "hetairas", "Override collided");
    hash_table_set(ht, NULL, "Test key null");
    hash_table_set(ht, "", "Test key empty string");
    hash_table_set(ht, "value_null", NULL);
    hash_table_set(ht, "value_null", "Override val null");
    hash_table_set(ht, "null_val", NULL);
    hash_table_set(ht, "val_empty", "");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
