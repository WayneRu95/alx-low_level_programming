#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: This is my structure entry
 * Return: return to the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	unsigned int node = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		node += 1;
		h = h->next;
	}
	return (node);
}
