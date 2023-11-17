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
	//printf("Hello\n");
	//printf("Head is at %p\n", *head);
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

	if (*head == NULL)
	{
		printf("Bef => Head: %p | New: %p\n", *head, new);
		*head = new;
		printf("Head: %p\n", *head);
	}
	ptr = *head;
	while (ptr != NULL)
	{
		printf("Pos: %p => %s\n", ptr, ptr->str);
		ptr = ptr->next;
	}
	*(&ptr) = new;
	//ptr = new;
	
	return (new);
}
