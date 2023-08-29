#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: Structure of the code
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	while (tmp && count < index)
	{
		tmp = tmp->next;
		count++;
	}

	return (tmp ? tmp : NULL);
}
