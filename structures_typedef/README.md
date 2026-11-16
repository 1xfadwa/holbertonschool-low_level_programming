# C - Structures, typedef

This project covers structures (`struct`) and `typedef` in C.

## Requirements

* Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
* Betty coding style
* No global variables
* Allowed functions: `printf`, `malloc`, `free`, `exit`

## Tasks

* **dog.h**: defines `struct dog`, the type `dog_t`, and all prototypes.
* **1-init_dog.c**: `void init_dog(struct dog *d, char *name, float age, char *owner);`
  initializes a variable of type `struct dog`.
* **2-print_dog.c**: `void print_dog(struct dog *d);`
  prints a `struct dog`.
* **4-new_dog.c**: `dog_t *new_dog(char *name, float age, char *owner);`
  creates a new dog, storing copies of `name` and `owner`.
* **5-free_dog.c**: `void free_dog(dog_t *d);`
  frees a dog.
