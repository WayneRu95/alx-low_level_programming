#include "lists.h"

/**
 * free_listint -  function that frees a listint_t list.
 * @head: Structure for my code
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		listint_t *temp;

		temp = head;
		free(temp);
		head = head->next;
	}
}
