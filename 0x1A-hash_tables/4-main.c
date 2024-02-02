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
    char *value;

    ht = hash_table_create(1024);
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
    hash_table_set(ht, NULL, "Test key null");
    hash_table_set(ht, "", "Test key empty string");
    hash_table_set(ht, "value_null", NULL);
    hash_table_set(ht, "value_null", "Override val null");
    hash_table_set(ht, "null_val", NULL);

    value = hash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    value = hash_table_get(ht, "Bob");
    printf("%s:%s\n", "Bob", value);
    value = hash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = hash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", value);
    value = hash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", value);
    value = hash_table_get(ht, "98");
    printf("%s:%s\n", "98", value);
    value = hash_table_get(ht, "c");
    printf("%s:%s\n", "c", value);
    value = hash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", value);
    value = hash_table_get(ht, "hetairas");
    printf("%s:%s\n", "hetairas", value);
    value = hash_table_get(ht, "mentioner");
    printf("%s:%s\n", "mentioner", value);
    value = hash_table_get(ht, "");
    printf("%s:%s\n", "", value);
    value = hash_table_get(ht, NULL);
    printf("%s:%s\n", "NULL", value);
    value = hash_table_get(ht, "value_null");
    printf("%s:%s\n", "value_null", value);
    value = hash_table_get(ht, "null_val");
    printf("%s:%s\n", "null_val", value);
    return (EXIT_SUCCESS);
}
