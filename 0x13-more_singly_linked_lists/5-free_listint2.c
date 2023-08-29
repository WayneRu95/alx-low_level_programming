#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: Structure for my code
 */
void free_listint2(listint_t **head)
{

	if (head == NULL)
	{
		return;
	}
	while ((*head) != NULL)
	{
		listint_t *tmp;

		tmp = (*head);
		free(tmp);
		(*head) = (*head)->next;
	}
	(*head) = NULL;
}
