#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list of integers
 * @head: Pointer to the list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *nod;

	while (head)
	{
	nod = head->next;
	free(head);
		free(head);
		head = nod;
	}
}
