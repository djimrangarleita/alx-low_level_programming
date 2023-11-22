#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - add new node at position @idx
 * @head: current head of the list
 * @idx: where to insert new node
 * @n: the elt to insert
 * Return: The address of the new elt or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *tmp;

	if (!head)
		return (NULL);

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	if (i == 0 && idx == 0)
	{
		new->n = n;
		new->next = tmp;
		*head = new;
		return (new);
	}

	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;

			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	free(new);

	return (NULL);
}
