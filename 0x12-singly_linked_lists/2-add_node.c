#include "lists.h"

/**
 * add_node - Adds node at the beginning of a linked list
 * @head: Pointer to the first node in the list
 * @n: Data to insert in the new node
 *
 * Return: Pointer to the new node, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if(!new)
		return (NULL);
	
	new->str = strdup(str);
	new->len =len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
