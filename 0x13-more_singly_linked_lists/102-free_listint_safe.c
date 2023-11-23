#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - safely print list of ints, remove loop if any
 * @head: head of the list
 * Return: number of nodes, exit 98 if function fails
 */
size_t free_listint_safe(listint_t **h)
{
	int nodes = 0;
	listint_t *tmp;

	tmp = *h;
	while (tmp != NULL)
	{
		*h = tmp;
		tmp = tmp->next;
		free(*h);
		nodes++;
	}
	*h = NULL;

	return (nodes);
}
