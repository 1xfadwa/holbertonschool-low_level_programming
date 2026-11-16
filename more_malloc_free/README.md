# C - More malloc, free

This project covers `exit`, `calloc` and `realloc`, and how to handle
memory allocation failures in C.

## Requirements

* Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
* Betty coding style
* No global variables
* Only `malloc`, `free` and `exit` are allowed from the standard library

## Tasks

* **0-malloc_checked.c**: `void *malloc_checked(unsigned int b);`
  allocates memory using `malloc`, and exits with status 98 if it fails.
* **1-string_nconcat.c**: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
  concatenates `s1` with the first `n` bytes of `s2`.

## Header

* **main.h**: contains the prototypes of all the functions.
