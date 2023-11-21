#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node at the beginning of a list
 * @head: current head of the list
 * @n: new int elt to add to the list
 * Return: The address of the new elt or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
