#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head node and return data(n) at head->n
 * @head: current head of the list
 * Return: The address of the new elt or null
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (n);
}
