#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at @index
 * @head: head of node, ptr
 * @index: index of the node to be deleted
 * Return: 1 if success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *tmp;
	unsigned int i;

	i = 0;
	ptr = *head;
	while (ptr != NULL)
	{

		if (i == index - 1)
		{
			tmp = ptr->next->next;
			free(ptr->next);
			ptr->next = tmp;
			return (1);
		}
		if (i == 0 && index == 0)
		{
			tmp = ptr->next;
			free(ptr);
			*head = tmp;
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
