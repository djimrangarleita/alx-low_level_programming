#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add new node at the end of list
 * @head: head of the list, ptr
 * @n: new elt to add, int
 * Return: Address of new elt or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}

	return (new);
}
