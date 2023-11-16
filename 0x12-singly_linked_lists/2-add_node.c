#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 * @head: ptr to the head of the list
 * @str: ptr to string litteral
 * Return: address of new node or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);

	new->len = (int)strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
