#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint - add new node at the beginning of a list
 * @head: current head of the list
 * Return: The address of the new elt or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
