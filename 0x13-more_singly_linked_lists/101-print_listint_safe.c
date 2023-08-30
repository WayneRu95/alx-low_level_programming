#include "lists.h"
/**
 * print_listint_safe - function that frees a listint_t list.
 * @head: Structure of my code
 * Return: head
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t count = 0;
	size_t new_node;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		count++;
		tmp_n = tmp_n->next;
		l_n = head;
		new_node = 0;
		while (new_node < count)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (count);
			}
			l_n = l_new->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (count);
