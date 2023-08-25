#include "lists.h"
#include <stdlib.h>
/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Int
 **/

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
