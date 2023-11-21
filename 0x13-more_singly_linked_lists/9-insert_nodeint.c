#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - add new node at the beginning of a list
 * @head: current head of the list
 * @idx: where to insert new node
 * @n: the elt to insert
 * Return: The address of the new elt or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *tmp;

	if (!head || !*head)
		return (NULL);

	tmp = *head;
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = tmp;
			tmp->next = new;

			return (*head);
		}
		tmp = tmp->next;
		i++;
	}

	return (NULL);
}
