#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - add new node at the beginning of a list
 * @head: current head of the list
 * Return: The address of the new elt or null
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			ptr = (*head)->next;
			free(*head);
			*head = ptr;
		}
	}
}
