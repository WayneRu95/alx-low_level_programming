#include "lists.h"

/**
 * listint_len - function that returns the number of element
 * in a linked listint_t list.
 * @h: This is my structure entry
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int node = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		node += 1;
		h = h->next;
	}
	return (node);
}
