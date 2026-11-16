# C - malloc, free

This project covers dynamic memory allocation in C using `malloc` and `free`,
and how to check for memory leaks with `valgrind`.

## Requirements

* Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
* Betty coding style
* No global variables
* Only `malloc` and `free` are allowed from the standard library

## Tasks

* **0-create_array.c**: `char *create_array(unsigned int size, char c);`
  creates an array of chars and initializes it with a specific char.
* **1-strdup.c**: `char *_strdup(char *str);`
  returns a pointer to a newly allocated copy of the given string.
* **2-str_concat.c**: `char *str_concat(char *s1, char *s2);`
  concatenates two strings into a newly allocated space.
* **3-alloc_grid.c**: `int **alloc_grid(int width, int height);`
  returns a pointer to a 2 dimensional array of integers initialized to 0.
* **4-free_grid.c**: `void free_grid(int **grid, int height);`
  frees a 2 dimensional grid created by `alloc_grid`.

## Header

* **main.h**: contains the prototypes of all the functions.
