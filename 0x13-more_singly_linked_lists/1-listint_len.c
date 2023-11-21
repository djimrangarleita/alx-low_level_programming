#include "lists.h"

/**
 * listint_len - print int from linked list
 * @h: head of the list
 * Return: size of the list, number of elts
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *ptr;

	if (!h)
		return (0);

	count = 0;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
