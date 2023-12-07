# 0x17 - C Doubly Linked Lists

This project implements and explores doubly linked lists in the C programming language. The doubly linked list is a linear data structure that consists of nodes where each node contains a pointer to the previous and the next nodes.

## Table of Contents

- [Introduction](#introduction)
- [Files](#files)
- [Usage](#usage)
- [Author](#author)

## Introduction

In this project, you will find the implementation of various functions and operations related to doubly linked lists in C. It provides a hands-on understanding of how doubly linked lists work, including insertion, deletion, traversal, and other essential operations.

## Files

- `0-print_dlistint.c`: Function that prints all the elements of a doubly linked list.
- `1-dlistint_len.c`: Function that returns the number of elements in a doubly linked list.
- `2-add_dnodeint.c`: Function that adds a new node at the beginning of a doubly linked list.
- `3-add_dnodeint_end.c`: Function that adds a new node at the end of a doubly linked list.
- `4-free_dlistint.c`: Function that frees a doubly linked list.
- `5-get_dnodeint.c`: Function that returns the nth node of a doubly linked list.
- `6-sum_dlistint.c`: Function that returns the sum of all the data (n) of a doubly linked list.
- `7-insert_dnodeint.c`: Function that inserts a new node at a given position.
- `8-delete_dnodeint.c`: Function that deletes a node at a given position.

## Usage

To use these functions, follow these steps:

1. Clone this repository to your local machine.
2. Compile the files using your preferred C compiler (e.g., gcc).
3. Include the necessary header file in your C program: `#include "lists.h"`.
4. Use the provided functions in your C code to perform operations on doubly linked lists.

Example:

```c
#include "lists.h"

int main(void) {
    dlistint_t *head = NULL;

    /* Use the functions as needed */
    /* e.g., head = add_dnodeint(&head, 10); */

    return (0);
}
Author
This project is authored by Wayne R Masakure.
