#include <stdio.h>
#include "lists.h"

/**
 * list_len - caculate and return len of list
 * @h: ptr to the head of the list
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	int count;
	const list_t *ptr;

	if (!h)
		return (0);

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
