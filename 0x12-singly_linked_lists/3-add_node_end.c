#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a new node to the end of list
 * @head: ptr to the head of the list
 * @str: ptr to string litteral
 * Return: address of new node or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = (int)strlen(str);
	new->next = NULL;

	ptr = *head;
	if (ptr == NULL)
	{
		*head = new;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (*head);
}
