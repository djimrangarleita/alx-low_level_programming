#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check_list - check if next ptr is in list, otherwise insert it
 * @hptr: ptr to list of known ptrs
 * @ptr: the head ptr to check in the list
 * Return: 1 if ptr in list, 0 otherwise
 */
int check_list(listp_t **hptr, void *ptr)
{
	listp_t *tmp, *newnode;

	tmp = *hptr;
	while (tmp != NULL && tmp->next != NULL)
	{
		if ((void *)tmp->p == ptr)
		{
			while (*hptr != NULL)
			{
				tmp = *hptr;
				*hptr = (*hptr)->next;
				free(tmp);
			}
			return (1);
		}
		tmp = tmp->next;
	}

	newnode = malloc(sizeof(listp_t));
	if (!newnode)
		exit(98);

	newnode->p = (listint_t *)ptr;
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
	listp_t *hptr = NULL, *tmp2;
	const listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		if (check_list(&hptr, (void *)tmp))
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			return (nodes);
		}
		else
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			tmp = tmp->next;
		}
		nodes++;
	}

	while (hptr != NULL)
	{
		tmp2 = hptr;
		hptr = (hptr)->next;
		free(tmp2);
	}

	return (nodes);
}
