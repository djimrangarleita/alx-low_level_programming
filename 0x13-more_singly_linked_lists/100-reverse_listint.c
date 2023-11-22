#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: head of the list
 * Return: ptr to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pptr = NULL, *nptr = NULL;

	if (!head || !*head)
		return (NULL);

	while (*head != NULL)
	{
		nptr = (*head)->next;
		(*head)->next = pptr;
		pptr = *head;
		*head = nptr;
	}
	*head = pptr;

	return (NULL);
}
