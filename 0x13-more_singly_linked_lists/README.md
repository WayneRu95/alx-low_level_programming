0x13. C - More singly linked lists

General
How to use linked lists
Start to look for the right source of information without too much help

INTRODUCTION TO FILES 📕📕📕:
0-print_listint.c: Function that prints all the elements of a listint_t list.
1-listint_len.c: Function that returns the number of elements in a linked listint_t list.
2-add_nodeint.c: Function that adds a new node at the beginning of a listint_t list.
3-add_nodeint_end.c: Function that adds a new node at the end of a listint_t list.
4-free_listint.c: Function that frees a listint_t list.
5-free_listint2.c: Function that frees a listint_t list.
6-pop_listint.c: Function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
7-get_nodeint.c: Function that returns the nth node of a listint_t linked list.
8-sum_listint.c: Function that returns the sum of all the data (n) of a listint_t linked list.
9-insert_nodeint.c: Function that inserts a new node at a given position.
10-delete_nodeint.c: Function that deletes the node at index index of a listint_t linked list.
100-reverse_listint.c: Function that reverses a listint_t linked list.

DATA STRUCTURE FOR PROJECT

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
