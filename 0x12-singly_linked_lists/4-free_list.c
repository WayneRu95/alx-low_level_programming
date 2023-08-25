#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Deallocates a linked list and its content
 * @head: Pointer to the list_t list to be deallocated
 */
void free_list(list_t *head)
{
	list_t *tmp_node;

	while (head)
	{
		tmp_node = head->next;
		free(head->str);
		free(head);
		head = tmp_node;
	}
}
