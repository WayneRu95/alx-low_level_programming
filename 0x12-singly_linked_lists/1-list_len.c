#include "lists.h"
#include <stddef.h>
/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Int
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int nodes = 0;

	temp = h;
	while (temp)
	{
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
