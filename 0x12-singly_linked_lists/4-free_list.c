#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list
 * @head: ptr to list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (!head)
		return;
	
	ptr = head;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			free(ptr->str);
		ptr = ptr->next;
	}
	free(head);
}
