#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list
 * @head: list_t is the list to be freed
 */
void free_list(list_t *head)
{
    list_t *nod;

    while (head)
    {
        listFree = head->next;
        free(head->str);
        free(head);
        head = listFree;
    }
}
