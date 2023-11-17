#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list
 * @head: ptr to list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = ptr;
	}
}
