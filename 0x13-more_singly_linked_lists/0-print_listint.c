#include "lists.h"

/**
 * print_listint - print int from linked list
 * @h: head of the list
 * Return: size of the list, number of elts
 */
size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *ptr;

	if (!h)
		return (0);

	count = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
