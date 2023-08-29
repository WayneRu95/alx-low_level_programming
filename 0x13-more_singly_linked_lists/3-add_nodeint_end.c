#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: struct for my code
 * @n: This is the integer take in my linked list.
 * Return: address of the new element, or NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	if (added_node == NULL)
	{
		free(added_node);
		return (added_node);
	}
	added_node->n = n;
	added_node->next = NULL;
	if (*head == NULL)
	{
		*head = added_node;
		return (*head);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = added_node;
	return (*head);
}
