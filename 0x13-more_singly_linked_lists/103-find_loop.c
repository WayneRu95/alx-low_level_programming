#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: structure of my code
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *starts = head;
	listint_t *closes = head;

	if (!head)
		return (NULL);

	while (starts && closes && closes->next)
	{
		closes = closes->next->next;
		starts = starts->next;
		if (closes == starts)
		{
			starts = head;
			while (starts != closes)
			{
				starts = starts->next;
				closes = closes->next;
			}
			return (closes);
		}
	}

	return (NULL);
}
