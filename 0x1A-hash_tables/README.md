# Project 0x1A - C Hash Tables

## Overview

This project implements a hash table data structure in C, providing a way to store and retrieve key-value pairs efficiently. Hash tables are widely used in computer science due to their constant-time average case for insertion, deletion, and lookup operations.

## Table of Contents

- [Features](#features)
- [Files](#files)
- [Compilation](#compilation)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Features

- **Hash Table Implementation:** Implements a hash table data structure using separate chaining for collision resolution.
- **Key-Value Pair Storage:** Allows storage and retrieval of key-value pairs, where keys are hashed for efficient lookup.
- **Dynamic Resizing:** Utilizes dynamic resizing to maintain performance as the number of elements stored in the hash table increases.
- **Hash Function Customization:** Provides options for customizing the hash function to suit specific use cases.

## Files

- `hash_tables.h`: Header file containing function prototypes and necessary data structures.
- `hash_tables.c`: Source file implementing the hash table functionalities.
- `main.c`: Example usage and demonstration of the implemented hash table functions.

## Compilation

To compile the project, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hash_table
Usage
To use the hash table functionalities in your code, include the hash_tables.h header file and link against the compiled object file.

Here's a basic example of how to create a hash table, insert elements, and perform a lookup:

c
Copy code
#include "hash_tables.h"
#include <stdio.h>

int main(void) {
    /* Create a hash table */
    hash_table_t *ht = create_hash_table(10);

    /* Insert key-value pairs */
    hash_table_set(ht, "key1", "value1");
    hash_table_set(ht, "key2", "value2");

    /* Retrieve values */
    char *value1 = hash_table_get(ht, "key1");
    char *value2 = hash_table_get(ht, "key2");

    printf("Value for key1: %s\n", value1);
    printf("Value for key2: %s\n", value2);

    /* Free memory */
    free_hash_table(ht);

    return 0;
}
Example
For a more detailed example of usage, refer to the main.c file included in this repository.

Contributing
Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request.

Author: Wayne R Masakure
