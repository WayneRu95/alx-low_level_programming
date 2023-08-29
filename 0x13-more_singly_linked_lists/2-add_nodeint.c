#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: Pointer to head of the linked list
 * @n: Integer to assigned to the node
 * Return: Pointer to the head of the linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added_node = (listint_t *) malloc(sizeof(listint_t));

	if (added_node == NULL)
		return (NULL);
	added_node->n = n;
	added_node->next = (*head);
	(*head) = added_node;
	return (*head);
}
