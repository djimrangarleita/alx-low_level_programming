#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elts of a linked list
 * @h: ptr to the head of the list
 * Return: size of the list
 */
size_t print_list(const list_t *h)
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
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}

	return (count);
}
