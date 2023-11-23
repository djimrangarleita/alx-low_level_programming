#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check_list - check if next ptr is in list, otherwise insert it
 * @hptr: ptr to list of known ptrs
 * @ptr: the head->next ptr to check in the list
 * Return: 1 if ptr in list, 0 otherwise
 */
int check_list(listp_t **hptr, listint_t *ptr)
{
	listp_t *tmp, *newnode;

	tmp = *hptr;
	while (tmp != NULL && tmp->next != NULL)
	{
		if (tmp->p == ptr)
		{
			ptr->next = NULL;
			return (1);
		}
		tmp = tmp->next;
	}

	newnode = malloc(sizeof(listp_t));
	if (!newnode)
		exit(98);
	newnode->p = ptr;

	if (*hptr != NULL)
		tmp->next = newnode;
	else
		*hptr = newnode;

	return (0);
}

/**
 * print_listint_safe - safely print list of ints, remove loop if any
 * @head: head of the list
 * Return: number of nodes, exit 98 if function fails
 */
size_t print_listint_safe(const listint_t *head)
{
	int nodes = 0;
	listp_t *hptr = NULL;
	const listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		if (check_list(&hptr, tmp->next))
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
			tmp = NULL;
		}
		else
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
		}
		nodes++;
	}
	free(hptr);

	return (nodes);
}
