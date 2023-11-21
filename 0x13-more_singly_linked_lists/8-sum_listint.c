#include "lists.h"

/**
 * sum_listint - return the sum of all elt of linked list
 * @head: head of the list
 * Return: sum of n elts or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;


	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
