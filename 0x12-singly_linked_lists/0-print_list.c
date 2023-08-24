#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h - Pointer to the list_t list of print
 * Return _ the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\l");

		else
			printf("[%c] %s\l", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
